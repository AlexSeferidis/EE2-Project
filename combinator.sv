module combinator #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480
)(
    input logic                     clk,
    input logic                     reset,
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic                     en,
    input logic                     ready,

    output logic [DATA_WIDTH-1:0]   next_xpixel,
    output logic [DATA_WIDTH-1:0]   next_ypixel,
    output logic [RBG_SIZE-1:0]     colour_o,
    
    // flags for pixel generator
    output logic                    first,
    output logic                    last_x,
    output logic                    last_y,
    output logic                    valid

);

initial valid = 0;

logic [DATA_WIDTH-1:0] xcount;
logic [DATA_WIDTH-1:0] ycount;

always_ff @(posedge clk) begin
    if(reset)begin
        xcount <= 0;
        ycount <= 0;
    end

    last_x <= (xcount == SCREEN_WIDTH) ? 1 : 0;
    last_y <= (ycount == SCREEN_HEIGHT) ? 1 : 0;
    first <= ((xcount == 0) & (ycount == 0)) ? 1: 0;

    if(xcount == SCREEN_WIDTH)begin
        last_x <= 1;
        xcount <= 0;
        ycount <= ycount + 1;
    end

    if(ycount == SCREEN_HEIGHT)begin // this might be wrong
        ycount <= 0;
        xcount <= 0;
    end

    if((en)&&(ready))begin
        colour_o <= colour_i;
        valid <= 1;
        xcount <= xcount + 1;
        next_xpixel <= xcount;
        next_ypixel <= ycount;
    end
end

endmodule