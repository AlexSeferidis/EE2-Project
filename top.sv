module top #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24
)(
    input logic                     clk,
    input logic                     reset,
    input logic                     fin_flag,
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic [DATA_WIDTH-1:0]    xpixel_i,
    input logic [DATA_WIDTH-1:0]    ypixel_i,
    input logic                     ready,

    output logic                    full_queue,
    output logic [RBG_SIZE-1:0]     colour_o,

    // flags for pixel generator
    output logic                    first,
    output logic                    last_x,
    output logic                    last_y,
    output logic                    valid

);

logic [DATA_WIDTH-1:0]  xpixel_wire;
logic [DATA_WIDTH-1:0]  ypixel_wire;
logic [RBG_SIZE-1:0]    colour_wire;
logic                   en_wire;


queue queue_block(
   .clk(clk),
   .reset(reset),
   .fin_flag(fin_flag),
   .colour_i(colour_i),
   .xpixel_i(xpixel_i),
   .ypixel_i(ypixel_i),
   .xpixel_check(xpixel_wire),
   .ypixel_check(ypixel_wire),
   .colour_o(colour_wire),
   .full_queue(full_queue),
   .en(en_wire) 
);

combinator combinator_block(
    .clk(clk),
    .reset(reset),
    .colour_i(colour_wire),
    .en(en_wire),
    .ready(ready),
    .next_xpixel(xpixel_wire),
    .next_ypixel(ypixel_wire),
    .colour_o(colour_o),
    .first(first),
    .last_x(last_x),
    .last_y(last_y),
    .valid(valid)
);

endmodule
