module register #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [WIDTH-1:0] in,
    output logic [WIDTH-1:0] out
);

    always_ff @(posedge clk) begin
        if (rst) begin
            out <= 0;
        end
        else if (en) begin
            out <= in;
        end
    end

endmodule
