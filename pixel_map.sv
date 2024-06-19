module pixel_map#(
    parameter PIXEL_DATA_WIDTH = 10, //Change as per screen width and height
    parameter ENGINE_DATA_WIDTH = 25,
    parameter ENGINE_FRACT_WIDTH = 20
    
)(
    input logic clk,
    input logic reset,
    input logic en,
    input logic distributor_ready,
    input logic full_queue,
    input logic [PIXEL_DATA_WIDTH-1:0] pixel_x_in,
    input logic [PIXEL_DATA_WIDTH-1:0] pixel_y_in,
    input logic signed [ENGINE_DATA_WIDTH-1:0] x_offset,
    input logic signed [ENGINE_DATA_WIDTH-1:0] y_offset,
    input logic [31:0] zoom,
    output logic signed [ENGINE_DATA_WIDTH-1:0] real_x,
    output logic signed [ENGINE_DATA_WIDTH-1:0] imag_y,
    output logic [PIXEL_DATA_WIDTH-1:0] pixel_x_out,
    output logic [PIXEL_DATA_WIDTH-1:0] pixel_y_out
);
    //wire signed [ENGINE_DATA_WIDTH-1:0] scale_factor = {11'b0, 13'b1100110011010};
    wire signed [ENGINE_DATA_WIDTH-1:0] scale_factor = {12'b0, 13'b1100110011010};
    wire signed [ENGINE_DATA_WIDTH-1:0] r_min = x_offset[24:0] + {5'b11110, 20'b0};
    wire signed [ENGINE_DATA_WIDTH-1:0] i_min = y_offset[24:0] + {6'b111101, 19'b0};
    wire signed [ENGINE_DATA_WIDTH-1:0] r_gradient, i_gradient;
    wire signed [ENGINE_DATA_WIDTH-1:0] pixel_x_fixed, pixel_y_fixed;
    assign pixel_x_fixed = {{ENGINE_DATA_WIDTH-PIXEL_DATA_WIDTH{1'b0}}, pixel_x_in} << 14;
    assign pixel_y_fixed = {{ENGINE_DATA_WIDTH-PIXEL_DATA_WIDTH{1'b0}}, pixel_y_in} << 14;
    


    multiplier #() M1 (
        .a(scale_factor),
        .b(pixel_x_fixed),
        .rst(1'b0),
        .result(r_gradient)
    );


    multiplier #() M2 (
        .a(scale_factor),
        .b(pixel_y_fixed),
        .rst(1'b0),
        .result(i_gradient)
    );

    always_ff @(posedge clk) begin
        if (reset) begin
            real_x <= 0;
            imag_y <= 0;
            pixel_x_out <= 0;
            pixel_y_out <= 0;
        end
        else if ((en)&&(~full_queue)&&(~distributor_ready)) begin
            pixel_x_out <= pixel_x_in;
            pixel_y_out <= pixel_y_in;
            real_x <= r_min + (r_gradient << 6);
            imag_y <= i_min + (i_gradient << 6);
        end
    end

endmodule
