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

    logic signed [ENGINE_DATA_WIDTH-1:0] zoom_scale = {12'b0, 13'b1100110011010};
    logic signed [ENGINE_DATA_WIDTH-1:0] r_min_fixed_offset;
    logic signed [ENGINE_DATA_WIDTH-1:0] i_min_fixed_offset;
    logic signed [ENGINE_DATA_WIDTH-1:0] r_min_baseline_fixed_offset = {5'b11110, 20'b0};  //-2.0
    logic signed [ENGINE_DATA_WIDTH-1:0] i_min_baseline_fixed_offset = {5'b11110, 20'b01111111111111111111};  //-1.5
    logic signed [ENGINE_DATA_WIDTH-1:0] r_min;
    logic signed [ENGINE_DATA_WIDTH-1:0] i_min;
    logic signed [ENGINE_DATA_WIDTH-1:0] r_gradient, i_gradient;
    logic signed [ENGINE_DATA_WIDTH-1:0] pixel_x_fixed, pixel_y_fixed;
    logic signed [ENGINE_DATA_WIDTH-1:0] scale_factor;

    assign pixel_x_fixed = {{ENGINE_DATA_WIDTH-PIXEL_DATA_WIDTH{1'b0}}, pixel_x_in} << 14;
    assign pixel_y_fixed = {{ENGINE_DATA_WIDTH-PIXEL_DATA_WIDTH{1'b0}}, pixel_y_in} << 14;    
    assign r_min = x_offset + r_min_fixed_offset;
    assign i_min = y_offset + i_min_fixed_offset;


    always_comb begin
        case (zoom)
            3'b000: begin
                scale_factor = zoom_scale;        // 1.0
                r_min_fixed_offset = r_min_baseline_fixed_offset;  //-2.0
                i_min_fixed_offset = i_min_baseline_fixed_offset;  //-1.5
            end
            3'b001: begin
                scale_factor = zoom_scale >> 1;       // 0.5
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 1;  //-1.0
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 1;  //-0.75
            end
            3'b010: begin
                scale_factor = zoom_scale >> 2;       // 0.25
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 2;
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 2;
            end
            3'b011: begin
                scale_factor = zoom_scale >> 3;       // 0.125
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 3;
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 3;
            end
            3'b100: begin
                scale_factor = zoom_scale >> 4;       // 0.0625
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 4;
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 4;
            end
            3'b101: begin
                scale_factor = zoom_scale >> 5;       // 0.03125
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 5;
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 5;
            end
            3'b110: begin
                scale_factor = zoom_scale >> 6;       // 0.015625
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 6;
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 6;
            end
            3'b111: begin
                scale_factor = zoom_scale >> 7;       // 0.0078125
                r_min_fixed_offset = r_min_baseline_fixed_offset >>> 7;
                i_min_fixed_offset = i_min_baseline_fixed_offset >>> 7;
            end
            default: begin
                scale_factor = zoom_scale;
                r_min_fixed_offset = r_min_baseline_fixed_offset;
                i_min_fixed_offset = i_min_baseline_fixed_offset;
            end
        endcase
    end

    // Multiplier for r_gradient
    multiplier #() M1 (
        .a(scale_factor),
        .b(pixel_x_fixed),
        .rst(1'b0),
        .result(r_gradient)
    );

    // Multiplier for i_gradient
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
        else if (en && ~full_queue && ~distributor_ready) begin
            pixel_x_out <= pixel_x_in;
            pixel_y_out <= pixel_y_in;
            real_x <= r_min + (r_gradient << 6);
            imag_y <= i_min + (i_gradient << 6);
        end
    end

    

endmodule

