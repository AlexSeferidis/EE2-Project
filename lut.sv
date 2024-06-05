module lut #(
    parameters  DATA_WIDTH = 32,
                RBG_SIZE = 24,
                MAX_ITERATION
) (
    input logic [DATA_WIDTH-1:0]    iterations,
    
    output logic [RBG_SIZE-1:0]     rbg_val
);
    
logic [DATA_WIDTH-1:0] lut_array [MAX_ITERATION-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("lut.hex", lut_array); // need to create an lut.hex file with rgb values
    $display("rom Loaded");
end
always_comb begin
    rbg_val = lut_array[iterations];
end

endmodule
