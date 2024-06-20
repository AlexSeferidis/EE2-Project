module pixel_map #(
    parameter PIXEL_DATA_WIDTH = 10, // Change as per screen width and height
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
    input logic [2:0] zoom,
    input logic signed [ENGINE_DATA_WIDTH-1:0] x_offset,
    input logic signed [ENGINE_DATA_WIDTH-1:0] y_offset,
    output logic signed [ENGINE_DATA_WIDTH-1:0] real_x,
    output logic signed [ENGINE_DATA_WIDTH-1:0] imag_y,
    output logic [PIXEL_DATA_WIDTH-1:0] pixel_x_out,
    output logic [PIXEL_DATA_WIDTH-1:0] pixel_y_out
);

    logic signed [ENGINE_DATA_WIDTH-1:0] scale_factor = {9'b0, 16'b0001100110011010};
    logic signed [ENGINE_DATA_WIDTH-1:0] zoom_scale;
    logic signed [PIXEL_DATA_WIDTH-1:0] x_pixel_diff, y_pixel_diff;
    logic signed [ENGINE_DATA_WIDTH-1:0] pixel_x_fixed, pixel_y_fixed, r_gradient, i_gradient;

    assign x_pixel_diff = pixel_x_in - 10'd320;
    assign y_pixel_diff = pixel_y_in - 10'd240;
    assign pixel_x_fixed = {x_pixel_diff, 15'b0};
    assign pixel_y_fixed = {y_pixel_diff, 15'b0};
    assign zoom_scale = scale_factor >> zoom;


    // Multiplier for r_gradient
    multiplier #() M1 (
        .a(zoom_scale),
        .b(pixel_x_fixed),
        .rst(1'b0),
        .result(r_gradient)
    );

    // Multiplier for i_gradient
    multiplier #() M2 (
        .a(zoom_scale),
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
        else if (en && ~full_queue && ~distributor_ready) begin
            pixel_x_out <= pixel_x_in;
            pixel_y_out <= pixel_y_in;
            real_x <= (r_gradient << 5) + x_offset;
            imag_y <= (i_gradient << 5) + y_offset;
        end
    end

    

endmodule

