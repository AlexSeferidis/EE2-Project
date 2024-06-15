module combinator #(
    parameter   DATA_WIDTH = 10,
                RBG_SIZE = 24,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480
                // SCREEN_WIDTH = 1280,
                // SCREEN_HEIGHT = 720
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


logic [DATA_WIDTH-1:0] xpixel;
logic [DATA_WIDTH-1:0] ypixel;

assign first = (xpixel == 0) && (ypixel == 0);
assign last_x = (xpixel == SCREEN_WIDTH - 1);
assign last_y = (ypixel == SCREEN_HEIGHT - 1);
assign valid = en;


always_ff @(posedge clk) begin

    if(reset)begin
        xpixel <= 0;
        ypixel <= 0;
        next_xpixel <= 0;
        next_ypixel <= 0;
    end

    if((en)&&(ready))begin
        if(ypixel >= SCREEN_HEIGHT)begin
            xpixel <= 0;
            ypixel <= 0;
        end

        else if((xpixel == SCREEN_WIDTH - 1))begin
            xpixel <= 0;
            ypixel <= ypixel + 1;
        end
        else begin
            xpixel <= xpixel + 1;
        end
        colour_o <= colour_i;
        next_xpixel <= xpixel;
        next_ypixel <= ypixel;
    end
    else begin
    end   
end

endmodule
