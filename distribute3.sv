module distribute3#(
    parameter   PIXEL_DATA_WIDTH = 32,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480,
                NUM_ENGINES = 3
)(
    input logic                         clk,
    input logic                         reset,
    input logic                         fin_flag,
    
    output logic [PIXEL_DATA_WIDTH-1:0]       x1, x2, x3, y1, y2 ,y3
);

logic [PIXEL_DATA_WIDTH-1:0] x0;
logic [PIXEL_DATA_WIDTH-1:0] y0;

// starting from top left of screen - raster pattern
initial x0 = 0;
initial y0 = 0;

assign x1 = x0;
assign x2 = (x0 + 1) % SCREEN_WIDTH;
assign x3 = (x0 + 2) % SCREEN_WIDTH;

assign y1 = y0;
assign y2 = ( (y0 + (x0+1)/SCREEN_WIDTH) % SCREEN_HEIGHT );
assign y3 = ( (y0 + (x0+2)/SCREEN_WIDTH) % SCREEN_HEIGHT );



always_ff @(posedge clk) begin
    
    if (reset) begin
        x0 <= 0;
        y0 <= 0;
    end

    else if (fin_flag) begin
        x0 <= (x0 + NUM_ENGINES) % SCREEN_WIDTH;
        y0 <= ( (y0 + (x0+NUM_ENGINES)/SCREEN_WIDTH) % SCREEN_HEIGHT ) ;
    end

end

endmodule
