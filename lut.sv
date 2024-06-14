module lut #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                MAX_ITERATION = 50,
                NUM_ENGINES = 6,
                LUT_SIZE = 256
)(
    input logic [DATA_WIDTH-1:0]    iterations [NUM_ENGINES-1:0],
    // input logic                     clk,
    
    output logic [RBG_SIZE-1:0]     rgb_val [NUM_ENGINES-1:0]
);
    
logic [RBG_SIZE-1:0] lut_array [LUT_SIZE-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("lut.hex", lut_array); // need to create an lut.hex file with rgb values
    $display("rom Loaded");
end
always_comb begin
// always_ff @(posedge clk)begin
    int step_size = (LUT_SIZE / NUM_ENGINES);
    for(int i = 0; i < NUM_ENGINES; i++)begin
        rgb_val[i] = lut_array[(iterations[i] == MAX_ITERATION) ? (LUT_SIZE - 1) : (iterations[i] * step_size)];
    end
end

endmodule
