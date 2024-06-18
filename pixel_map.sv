module pixel_map#(
    parameter PIXEL_DATA_WIDTH = 10, //Change as per screen width and height
    parameter ENGINE_DATA_WIDTH = 25,
    parameter ENGINE_FRACT_WIDTH = 20,
    parameter SCREEN_WIDTH = 640,
    parameter SCREEN_HEIGHT = 480
    
)(
    input logic clk,
    input logic reset,
    input logic en,
    input logic distributor_ready,
    input logic full_queue,
    input logic [2:0] zoom,
    input logic [PIXEL_DATA_WIDTH-1:0] pixel_x_in,
    input logic [PIXEL_DATA_WIDTH-1:0] pixel_y_in,
    input logic signed [ENGINE_DATA_WIDTH-1:0] x_offset,
    input logic signed [ENGINE_DATA_WIDTH-1:0] y_offset,
    output logic signed [ENGINE_DATA_WIDTH-1:0] real_x,
    output logic signed [ENGINE_DATA_WIDTH-1:0] imag_y,
    output logic [PIXEL_DATA_WIDTH-1:0] pixel_x_out,
    output logic [PIXEL_DATA_WIDTH-1:0] pixel_y_out
);

    logic signed [ENGINE_DATA_WIDTH-1:0] scale_factor = {9'b0,16'b0001100110011010};


    logic signed [PIXEL_DATA_WIDTH-1:0] x_pixel_diff = (pixel_x_in - 10'd320) >>> 6;
    logic signed [PIXEL_DATA_WIDTH-1:0] y_pixel_diff = (pixel_y_in - 10'd240) >>> 6;

    logic signed [ENGINE_DATA_WIDTH-1:0] x_diff_fixed =  {{ENGINE_DATA_WIDTH-PIXEL_DATA_WIDTH{x_pixel_diff[PIXEL_DATA_WIDTH-1]}}, x_pixel_diff};
    logic signed [ENGINE_DATA_WIDTH-1:0] y_diff_fixed =  {{ENGINE_DATA_WIDTH-PIXEL_DATA_WIDTH{y_pixel_diff[PIXEL_DATA_WIDTH-1]}}, y_pixel_diff};
    logic signed [ENGINE_DATA_WIDTH-1:0] real_x_next, imag_y_next;
    
    
    multiplier M5 (.a(x_diff_fixed), .b(scale_factor), .result(real_x_next), .rst(reset));
    multiplier M6 (.a(y_diff_fixed), .b(scale_factor), .result(imag_y_next), .rst(reset));


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
            real_x <= real_x_next << 6;
            imag_y <= imag_y_next << 6;
        end
    end

endmodule
