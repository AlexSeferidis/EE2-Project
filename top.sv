module top #(
    parameter   DATA_WIDTH = 10,
                PIXEL_DATA_WIDTH = 10,
                RBG_SIZE = 24,
                NUM_ENGINES = 8,
                ITERATIONS_WIDTH = 32
)(
    input logic                         clk,
    input logic                         reset,
    input logic                         ready,
    input logic [ITERATIONS_WIDTH-1:0]  iterations_max,
    input logic [2:0]                   zoom,
    input logic [24:0]                  x_offset, 
    input logic [24:0]                  y_offset,

    // output logic [RBG_SIZE-1:0]         colour_o,
    output logic [7:0]                  r, //for verilator test
    output logic [7:0]                  g,
    output logic [7:0]                  b,
    // flags for pixel generator
    output logic                        first,
    output logic                        last_x,
    output logic                        last_y,
    output logic                        valid

);

logic [RBG_SIZE-1:0]            colour_o_wire;

logic [PIXEL_DATA_WIDTH-1:0]          xpixel_wire;
logic [PIXEL_DATA_WIDTH-1:0]          ypixel_wire;
logic [RBG_SIZE-1:0]            colour_bus_o    [NUM_ENGINES-1:0];
logic                           fin_wire;
logic                           en_wire;
logic                           engines_ready_wire;
logic [NUM_ENGINES-1:0]         fin_bus;
logic [PIXEL_DATA_WIDTH-1:0]          x               [NUM_ENGINES-1:0];
logic [PIXEL_DATA_WIDTH-1:0]          y               [NUM_ENGINES-1:0];
logic [ITERATIONS_WIDTH-1:0]    iterations_bus  [NUM_ENGINES-1:0];
logic [PIXEL_DATA_WIDTH-1:0]          xpixel_bus      [NUM_ENGINES-1:0];
logic [PIXEL_DATA_WIDTH-1:0]          ypixel_bus      [NUM_ENGINES-1:0];
logic [NUM_ENGINES-1:0]         en_bus;
logic [NUM_ENGINES-1:0]         engines_ready;
logic [RBG_SIZE-1:0]            colour_bus_i      [NUM_ENGINES-1:0];
logic [NUM_ENGINES-1:0]         full_queue_bus;
logic [NUM_ENGINES-1:0]         match_bus;

assign en_wire = &en_bus;


int j;

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
            .reset(reset),
            .iterations_max(iterations_max),
            .x0_(x[i]),
            .y0_(y[i]),
            .zoom(zoom),
            .x_offset(x_offset),
            .y_offset(y_offset),
            .full_queue(full_queue_bus[i]),
            .en_pixel_map(fin_bus[i]),
            .engine_ready(engines_ready[i]),
            .iterations(iterations_bus[i]),
            .xpixel(xpixel_bus[i]),
            .ypixel(ypixel_bus[i])
        ); 

        queue_new queue_block(
            .clk(clk),
            .reset(reset),
            .fin_flag(fin_bus[i]),
            .colour_i(colour_bus_i[i]),
            .xpixel_i(xpixel_bus[i]),
            .ypixel_i(ypixel_bus[i]),
            .xpixel_check(xpixel_wire),
            .ypixel_check(ypixel_wire),
            .colour_o(colour_bus_o[i]),
            .full_queue(full_queue_bus[i]),
            .en(en_bus[i]),
            .match(match_bus[i])
            );
    end
endgenerate

lut lut_rom(
    //.clk(clk),
    .iterations(iterations_bus),
    .max_iterations(iterations_max),
    .rgb_val(colour_bus_i)
);

combinator combinator_block(
    .clk(clk),
    .reset(reset),
    .colour_i(colour_bus_o[j]),
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
assign r = colour_o_wire[7:0];
assign g = colour_o_wire[15:8];
assign b = colour_o_wire[23:16];

always_comb begin

    for(int k = 0; k < NUM_ENGINES; k++)begin
        if(match_bus[k])begin
            j = k;
        end
    end


    if (engines_ready == {NUM_ENGINES{1'b1}})begin
        engines_ready_wire = 1;
    end
    else begin
        engines_ready_wire = 0;
    end

    if(fin_bus == {NUM_ENGINES{1'b1}})begin
        fin_wire = engines_ready_wire;
    end
    else if (reset) begin
        fin_wire = engines_ready_wire;
    end
    else begin
        fin_wire = 0;
    end
end

endmodule
