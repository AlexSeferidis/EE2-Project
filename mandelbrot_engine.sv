// 25 bit fixed point engine
// 5 bit integer part
// 20 bit fractional part

module mandelbrot_engine#(
    parameter PIXEL_DATA_WIDTH = 10,
    parameter ENGINE_DATA_WIDTH = 25,
    parameter ENGINE_FRACT_WIDTH = 20,
    parameter ITERATIONS_WIDTH = 6
)(
    input logic                                     clk,
    input logic                                     reset,
    input logic [ITERATIONS_WIDTH-1:0]              iterations_max, // EFFICIENCY - variable ITERATIONS_WIDTH depending on iterations_max
    input logic  [PIXEL_DATA_WIDTH - 1:0]           x0_, // y0_ and x0_ is in pixels
    input logic  [PIXEL_DATA_WIDTH - 1:0]           y0_,
    input logic [2:0]                               zoom,
    input logic signed [ENGINE_DATA_WIDTH-1:0]      x_offset, 
    input logic signed [ENGINE_DATA_WIDTH-1:0]      y_offset,
    input logic                                     full_queue,

    output logic                                    en_pixel_map,
    output logic [ITERATIONS_WIDTH-1:0]             iterations,
    output logic [PIXEL_DATA_WIDTH-1:0]             xpixel,
    output logic [PIXEL_DATA_WIDTH-1:0]             ypixel
);

localparam ENGINE_INT_WIDTH = ENGINE_DATA_WIDTH - ENGINE_FRACT_WIDTH;

logic signed [ENGINE_DATA_WIDTH-1:0] x, y;
logic finished, distributor_ready;

initial xpixel = -1;

// ----------- MAP: PIXEL -> COMPLEX COORDS ----------

pixel_map pixel_map
(
    .clk(clk),
    .reset(reset),
    .en(en_pixel_map),
    .distributor_ready(distributor_ready),
    .full_queue(full_queue),
    .pixel_x_in(x0_),
    .pixel_y_in(y0_),
    .x_offset(x_offset),
    .y_offset(y_offset),
    .real_x(x),
    .imag_y(y),
    .pixel_x_out(xpixel),
    .pixel_y_out(ypixel)
);


logic [ITERATIONS_WIDTH-1:0] curr_iterations;
logic signed [ENGINE_DATA_WIDTH-1:0] zr, zi, zr_next, zi_next;
logic signed [ENGINE_DATA_WIDTH-1:0] zr2, zi2, zr2_next, zi2_next;
logic signed [ENGINE_DATA_WIDTH-1:0] zrzi;
logic en_stage_1, en_stage_2, init;
logic signed [ENGINE_DATA_WIDTH-1:0] distance;
logic signed [ENGINE_DATA_WIDTH-1:0] max_distance = {5'd4, 20'b0};

//Initialisation

// Zr, Zr^2, Zi, Zi^2 = 0
// Cr = x, Ci = y

// ----------- MANDELBROT ITERATION ----------

register #(
    .WIDTH(ITERATIONS_WIDTH)
) R0 (
    .clk(clk), .rst(init), .en(en_stage_2), .in(curr_iterations + 1), .out(curr_iterations)
);

// Stage 1

calc_stage_1 calc_stage_1(
    .clk(clk),
    .reset(init),
    .en(en_stage_1),
    .zr_next(zr_next),
    .zi_next(zi_next),
    .zr(zr),
    .zi(zi)
);

multiplier M5 (.a(zr), .b(zr), .result(zr2_next), .rst(init));
multiplier M6 (.a(zi), .b(zi), .result(zi2_next), .rst(init));

// Stage 2

calc_stage_2 calc_stage_2(
    .clk(clk),
    .reset(init),
    .en(en_stage_2),
    .zr2_next(zr2_next),
    .zi2_next(zi2_next),
    .zr2(zr2),
    .zi2(zi2)
);
multiplier M7 (.a(zr), .b(zi), .result(zrzi), .rst(init));



assign zr_next = zr2 - zi2 + x;
assign zi_next = (zrzi <<< 1) + y;


// ----------- MANDELBROT ESCAPE TEST ----------


assign distance = zr2 + zi2;

assign finished = (distance > max_distance) || (curr_iterations == iterations_max) || (distance < 0);

assign iterations = curr_iterations;

assign distributor_ready = (en_pixel_map && (x0_ == xpixel) && (y0_ == ypixel));

// ----------- STATE MACHINE ----------

statemachine SM(
    .clk(clk),
    .rst(reset),
    .finished(finished),
    .init(init),
    .en_pixel_map(en_pixel_map),
    .en_stage_1(en_stage_1),
    .en_stage_2(en_stage_2),
    .full_queue(full_queue),
    .distributor_ready(distributor_ready)
);


endmodule
