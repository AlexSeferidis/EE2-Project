module top #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                NUM_ENGINES = 3,
                ITERATIONS_WIDTH = 32
)(
    input logic                         clk,
    input logic                         reset,
    input logic                         ready,
    input logic [ITERATIONS_WIDTH-1:0]  iterations_max,
    input logic [DATA_WIDTH-1:0]        zoom, x_offset, y_offset,

    // output logic [RBG_SIZE-1:0]         colour_o,
    output logic [7:0]                  r, //for verilator test
    output logic [7:0]                  g,
    output logic [8:0]                  b,
    // flags for pixel generator
    output logic                        first,
    output logic                        last_x,
    output logic                        last_y,
    output logic                        valid,
    output logic                        full_queue [NUM_ENGINES-1:0]

);

logic [RBG_SIZE-1:0]            colour_o_wire;

logic [DATA_WIDTH-1:0]          xpixel_wire;
logic [DATA_WIDTH-1:0]          ypixel_wire;
logic [RBG_SIZE-1:0]            colour_wire;
logic                           reset_engine;
logic                           fin_wire;
logic                           en_wire;
logic [NUM_ENGINES-1:0]         fin_bus;
logic [DATA_WIDTH-1:0]          x               [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          y               [NUM_ENGINES-1:0];
logic [ITERATIONS_WIDTH-1:0]    iterations_bus  [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          xpixel_bus      [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          ypixel_bus      [NUM_ENGINES-1:0];
logic                           en_bus          [NUM_ENGINES-1:0];
logic [RBG_SIZE-1:0]            colour_bus      [NUM_ENGINES-1:0];

distribute3 distributor(
    .clk(clk),
    .reset(reset),
    .fin_flag(fin_wire),
    .x1(x[0]),
    .x2(x[1]),
    .x3(x[2]),
    .y1(y[0]),
    .y2(y[1]),
    .y3(y[2])
);

genvar i;
generate
    for(i = 0; i < NUM_ENGINES; i++)begin
        mandelbrot_engine engine(
            .clk(clk),
            .reset(reset_engine),
            .iterations_max(iterations_max),
            .x0_(x[i]),
            .y0_(y[i]),
            .zoom(zoom),
            .x_offset(x_offset),
            .y_offset(y_offset),
            .finished(fin_bus[i]),
            .iterations(iterations_bus[i]),
            .xpixel(xpixel_bus[i]),
            .ypixel(ypixel_bus[i])
        ); 

        queue queue_block(
            .clk(clk),
            .reset(reset),
            .fin_flag(fin_bus[i]),
            .colour_i(colour_bus[i]),
            .xpixel_i(xpixel_bus[i]),
            .ypixel_i(ypixel_bus[i]),
            .xpixel_check(xpixel_wire),
            .ypixel_check(ypixel_wire),
            .colour_o(colour_wire),
            .full_queue(full_queue[i]),
            .en(en_wire) 
            );
    end
endgenerate

lut lut_rom(
    .iterations(iterations_bus),
    .rgb_val(colour_bus)
);

combinator combinator_block(
    .clk(clk),
    .reset(reset),
    .colour_i(colour_wire),
    .en(en_wire),
    .ready(ready),
    .next_xpixel(xpixel_wire),
    .next_ypixel(ypixel_wire),
    .colour_o(colour_o_wire),
    .first(first),
    .last_x(last_x),
    .last_y(last_y),
    .valid(valid)
);

always_comb begin
    r = colour_o_wire[7:0];
    g = colour_o_wire[15:8];
    b = colour_o_wire[23:16];
    
    if(fin_bus == {NUM_ENGINES{1'b1}})begin
        fin_wire = 1;
        reset_engine = 1;
    end
    else if (reset) begin
        reset_engine = 1;
        fin_wire = 1;
    end
    else begin
        fin_wire = 0;
        reset_engine = 0;
    end
end

endmodule