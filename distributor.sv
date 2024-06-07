module distributor #(
    parameter   DATA_WIDTH = 32,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480,
                NUM_ENGINES = 2
)(
    input logic                     clk,
    input logic                     reset,
    input logic [NUM_ENGINES-1:0]   fin_bus,

    output logic [DATA_WIDTH-1:0]   xcoord          [NUM_ENGINES-1:0],
    output logic [DATA_WIDTH-1:0]   ycoord          [NUM_ENGINES-1:0],
    output logic                    reset_engines   [NUM_ENGINES-1:0]
);

logic [DATA_WIDTH-1:0]  xcount;
logic [DATA_WIDTH-1:0]  ycount;   

always_ff @(posedge clk)begin

    if(reset)begin
        for(int i = 0; i < NUM_ENGINES; i++)begin
            reset_engines[i] <= 1;
        end
        xcount <= 32'b0;
        ycount <= SCREEN_HEIGHT;
    end
    
    if(xcount == SCREEN_WIDTH)begin
        xcount <= 32'b0;
        ycount <= ycount - 1;
    end

    if(ycount == 32'b0)begin
        xcount <= 32'b0;
        ycount <= SCREEN_HEIGHT;
    end

    for(int i = 0; i < NUM_ENGINES; i++)begin
        if(fin_bus[i] == 1'b1)begin
            xcoord[i] <= xcount;
            ycoord[i] <= ycount;
            reset_engines[i] <= 1;
            xcount <= xcount + 1;
        end
    end
end

endmodule
