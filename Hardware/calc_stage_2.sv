module calc_stage_2 #(
    parameter ENGINE_DATA_WIDTH = 25
)(
    input logic clk,
    input logic reset,
    input logic en,
    input logic [ENGINE_DATA_WIDTH-1:0] zr2_next,
    input logic [ENGINE_DATA_WIDTH-1:0] zi2_next,
    output logic [ENGINE_DATA_WIDTH-1:0] zr2,
    output logic [ENGINE_DATA_WIDTH-1:0] zi2
);

    register #(
        .WIDTH(ENGINE_DATA_WIDTH)
    ) R3 (
        .clk(clk), .rst(reset), .en(en), .in(zr2_next), .out(zr2)
    );

    register #(
        .WIDTH(ENGINE_DATA_WIDTH)
    ) R4 (
        .clk(clk), .rst(reset), .en(en), .in(zi2_next), .out(zi2)
    );

endmodule
