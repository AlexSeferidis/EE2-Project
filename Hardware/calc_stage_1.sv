module calc_stage_1 #(
    parameter ENGINE_DATA_WIDTH = 25
)(
    input logic clk,
    input logic reset,
    input logic en,
    input logic [ENGINE_DATA_WIDTH-1:0] zr_next,
    input logic [ENGINE_DATA_WIDTH-1:0] zi_next,
    output logic [ENGINE_DATA_WIDTH-1:0] zr,
    output logic [ENGINE_DATA_WIDTH-1:0] zi
);

    register #(
        .WIDTH(ENGINE_DATA_WIDTH)
    ) R1 (
        .clk(clk), .rst(reset), .en(en), .in(zr_next), .out(zr)
    );

    register #(
        .WIDTH(ENGINE_DATA_WIDTH)
    ) R2 (
        .clk(clk), .rst(reset), .en(en), .in(zi_next), .out(zi)
    );

endmodule
