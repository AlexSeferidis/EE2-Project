module lut #(
    parameter ITERATIONS_WIDTH = 32,
    parameter RBG_SIZE = 24,
    parameter NUM_ENGINES = 12,
    parameter LUT_SIZE = 256
)(
    input logic [ITERATIONS_WIDTH-1:0]    iterations [NUM_ENGINES-1:0],
    // input logic                     clk,
    input logic [ITERATIONS_WIDTH-1:0]    max_iterations,
    
    output logic [RBG_SIZE-1:0]     rgb_val [NUM_ENGINES-1:0]
);
    
logic [RBG_SIZE-1:0] lut_array [LUT_SIZE-1:0];

int step_size;
int stepper;
int i;

initial begin
    $display("Loading rom.");
    $readmemh("lut.dat", lut_array); // need to create an lut.hex file with rgb values
    $display("rom Loaded");
end
always_comb begin
// always_ff @(posedge clk)begin
    stepper = LUT_SIZE;
    step_size = 0;
    for(i = 0; i < 5; i++)begin//(stepper > 0)begin
        step_size = step_size + 1;
        stepper = stepper - max_iterations;
        if(stepper <= 0)begin
            i = 6;
        end
    end
    for(i = 0; i < NUM_ENGINES; i++)begin
        rgb_val[i] = lut_array[(iterations[i] == max_iterations) ? (LUT_SIZE - 1) : (iterations[i] * step_size)];
    end
end

endmodule
