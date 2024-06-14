module distributorN#(
    parameter   PIXEL_DATA_WIDTH = 32,
                // SCREEN_WIDTH = 1280,
                // SCREEN_HEIGHT = 720,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480,
                NUM_ENGINES = 30
)(
    input logic                         clk,
    input logic                         reset,
    input logic                         fin_flag,

    output logic [PIXEL_DATA_WIDTH-1:0] x [NUM_ENGINES-1:0],
    output logic [PIXEL_DATA_WIDTH-1:0] y [NUM_ENGINES-1:0]
);

logic [PIXEL_DATA_WIDTH-1:0] x0;
logic [PIXEL_DATA_WIDTH-1:0] y0;
// starting from top left of screen - raster pattern
initial x0 = 0;
initial y0 = 0;

always_comb begin 
    for(int i = 0; i < NUM_ENGINES; i++) begin
        x[i] = (x0 + i) % SCREEN_WIDTH;
        y[i] = ( (y0 + (x0+i)/SCREEN_WIDTH) % SCREEN_HEIGHT );
    end
end

always_ff @(posedge clk) begin
    
    if (reset) begin
        x0 <= 0;
        y0 <= 0;
    end
    else if (fin_flag) begin
    x0 <= (x0 + NUM_ENGINES) % SCREEN_WIDTH;
    y0 <= ( (y0 + (x0+NUM_ENGINES)/SCREEN_WIDTH) % SCREEN_HEIGHT ) ;
    end
    //end

    end

endmodule
