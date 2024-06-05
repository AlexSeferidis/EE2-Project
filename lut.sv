module lut #(
    parameters  DATA_WIDTH = 32,
                RBG_SIZE = 24,
                MAX_ITERATION = 50,
                NUM_ENGINES = 4
)(
    input logic [DATA_WIDTH-1:0]    iterations [NUM_ENGINES-1:0],
    
    output logic [RBG_SIZE-1:0]     rbg_val [NUM_ENGINES-1:0]
);
    
logic [DATA_WIDTH-1:0] lut_array [MAX_ITERATION-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("lut.hex", lut_array); // need to create an lut.hex file with rgb values
    $display("rom Loaded");
end
always_comb begin
    for(int i = 0; i < NUM_ENGINES-1; i++)begin
        rbg_val[i] = lut_array[iterations[i]];
    end
end

endmodule
