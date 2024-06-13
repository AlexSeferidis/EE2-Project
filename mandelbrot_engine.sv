module mandelbrot_engine #(
    parameter   PIXEL_DATA_WIDTH = 32,
                fp_bits = 32, // internal engine datapath
                fp_bot = 24,
                ITERATIONS_WIDTH = 32,
                SCREEN_WIDTH = 1280,
                SCREEN_HEIGHT = 720,
                // FRACT_WIDTH = 24,
                SCALE_FACTOR = 1 << fp_bot
                
)(
    input logic                                     clk,
    input logic                                     reset,
    input logic [ITERATIONS_WIDTH-1:0]              iterations_max, // EFFICIENCY - variable ITERATIONS_WIDTH depending on iterations_max
    input logic signed  [PIXEL_DATA_WIDTH - 1:0]    x0_, // y0_ and x0_ is in pixels
    input logic signed  [PIXEL_DATA_WIDTH - 1:0]    y0_,
    input logic signed [fp_bits-1:0]                zoom,
    input logic signed [fp_bits-1:0]                x_offset, y_offset,

    output logic                                    finished,
    output logic [ITERATIONS_WIDTH-1:0]             iterations,
    output logic [PIXEL_DATA_WIDTH-1:0]             xpixel,
    output logic [PIXEL_DATA_WIDTH-1:0]             ypixel
);

// parameters -- what should be global and what should be local?
localparam fp_top = fp_bits - fp_bot; // might have to change back
localparam fp_square_top = fp_bits*2 - fp_top-1;

logic signed [fp_bits-1:0]  x0,y0;

// register for the input  ----- only read x0_ and y0_ 
logic [PIXEL_DATA_WIDTH-1:0] x0_buff, y0_buff;

//----- ALTERNATE DEFINITION OF x0 and y0 --------
logic signed [fp_bits-1:0]  x_min; 
logic signed [fp_bits-1:0]  y_min;
logic signed [fp_bits-1:0]  step;

// ----------- MAP: PIXEL -> COMPLEX COORDS ----------
// ------ can be done in the distributor once --------
assign x_min = (-(0.5 * (SCREEN_WIDTH)) + x_offset) * SCALE_FACTOR / (zoom * 100);
assign y_min = (-(0.5 * (SCREEN_HEIGHT)) + y_offset) * SCALE_FACTOR / (zoom * 100);
assign step = SCALE_FACTOR/(zoom * 100);

assign x0 = x_min + step*x0_;
assign y0 = y_min + step*y0_; // ymax - step*y0_

  enum {calc, finished_s, read_input} state;


  logic signed [fp_bits - 1:0] x;
  logic signed [fp_bits - 1:0] y;
  logic signed [fp_bits*2 - 1:0] y_tmp;
  logic signed [fp_bits*2 - 1:0] x2;
  logic signed [fp_bits*2 - 1:0] y2;

  initial
  begin
    state = read_input;
    finished = 1;
  end

  // always logic [PIXEL_DATA_WIDTH-1:0] delayy1, delayy2, delayx1, delayx2;
  always @ (posedge clk)
  begin
    if (reset == 1)
    begin
      state <= read_input;
      finished <= 0;
      iterations <= 0;

      x <= 0;
      y <= 0;
      y_tmp <= 0;
      x2 <= 0;
      y2 <= 0;
    end
    else

    case (state)
      read_input:
      begin
        x0_buff <= x0_;
        y0_buff <= y0_;
        state <= calc;
      end
      calc:
      begin
        // implicit pipeline
        // stage 1
        x <= x2[fp_square_top:fp_bot] - y2[fp_square_top:fp_bot] + x0;
        y <= y_tmp[fp_square_top:fp_bot] + y0;

        // stage 2
          // Real
        x2 <= x * x; // x * x
        y2 <= y * y; // y * y
          // Imaginary
        y_tmp[fp_bits*2-1:1] <= x * y; // 2 * x * y

        // stage 3
        if (iterations >= iterations_max ||
            x2[fp_square_top:fp_bot] + y2[fp_square_top:fp_bot] >= (fp_bits'('d4) << (fp_bot))) // x^2 + y^2 >= 4 ?
        begin
          state <= finished_s;

        end
        else
        begin
          iterations <= iterations + 1;
          state <= calc;
        end
      end
      finished_s:
      begin
        finished <= 1;
        xpixel <= x0_;
        ypixel <= y0_;
      end
    endcase
  end

endmodule
