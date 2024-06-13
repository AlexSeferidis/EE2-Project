module top #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                NUM_ENGINES = 6,
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
    output logic [7:0]                  b,
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
logic [RBG_SIZE-1:0]            colour_bus      [NUM_ENGINES-1:0];
logic                           reset_engine;
logic                           fin_wire;
// logic                           en_wire;
logic [NUM_ENGINES-1:0]         fin_bus;
logic [DATA_WIDTH-1:0]          x               [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          y               [NUM_ENGINES-1:0];
logic [ITERATIONS_WIDTH-1:0]    iterations_bus  [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          xpixel_bus      [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          ypixel_bus      [NUM_ENGINES-1:0];
logic [NUM_ENGINES-1:0]         en_bus;
logic [NUM_ENGINES-1:0]         taken_bus;
logic [RBG_SIZE-1:0]            queue_colour    [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          queue_x         [NUM_ENGINES-1:0];
logic [DATA_WIDTH-1:0]          queue_y         [NUM_ENGINES-1:0];

// assign en_wire = &en_bus;

distributorN distributor(
    .clk(clk),
    .reset(reset),
    .fin_flag(fin_wire),
    .x(x),
    .y(y)
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
            .taken(taken_bus[i]),
            // .identity(i),
            .colour_o(queue_colour[i]),
            .xpixel_o(queue_x[i]),
            .ypixel_o(queue_y[i]),
            .full_queue(full_queue[i])
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
    .colour_i(queue_colour),
    .xpixel_i(queue_x),
    .ypixel_i(queue_y),
    // .en(en_wire),
    .ready(ready),
    .taken(taken_bus),
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
