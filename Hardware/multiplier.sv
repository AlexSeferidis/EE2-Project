module multiplier #(
    parameter ENGINE_DATA_WIDTH = 25,  // Number of integer bits
    parameter ENGINE_FRACT_WIDTH = 20 // Number of fractional bits
) (
    input  logic signed [ENGINE_DATA_WIDTH-1:0] a,  // Fixed-point input a
    input  logic signed [ENGINE_DATA_WIDTH-1:0] b,  // Fixed-point input b
    input logic rst,  // Reset signal
    output logic signed [ENGINE_DATA_WIDTH-1:0] result  // Fixed-point output result
);
    localparam ENGINE_INT_WIDTH = ENGINE_DATA_WIDTH - ENGINE_FRACT_WIDTH;

    // Intermediate signal for the product
    logic signed [2*(ENGINE_DATA_WIDTH)-1:0] product;

    // Perform multiplication
    assign product = a * b;

    // Adjust the product to fit the fixed-point format
    assign result = rst ? 0 : product[ENGINE_DATA_WIDTH + ENGINE_FRACT_WIDTH -1:ENGINE_FRACT_WIDTH];  // Right shift by n bits to adjust for fixed-point

endmodule
