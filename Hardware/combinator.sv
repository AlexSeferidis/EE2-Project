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

initial valid = 0;

logic [DATA_WIDTH-1:0] xpixel;
logic [DATA_WIDTH-1:0] ypixel;


always_ff @(posedge clk) begin

    if(reset)begin
        xpixel <= 0;
        ypixel <= 0;
    end

    if((en)&&(ready))begin
        if (xpixel == 0 && ypixel == 0)begin
            first <= 1;
        end
        else begin
            first <= 0;
        end
        if(ypixel >= SCREEN_HEIGHT)begin
            last_y <= 1;
            xpixel <= 0;
            ypixel <= 0;
        end

        else if((xpixel == SCREEN_WIDTH - 1))begin
            last_x <= 1;
            last_y <= 0;
            xpixel <= 0;
            ypixel <= ypixel + 1;
        end
        else begin
            last_x <= 0;
            last_y <= 0;
            xpixel <= xpixel + 1;
        end
        valid <= 1;
        colour_o <= colour_i;
        next_xpixel <= xpixel;
        next_ypixel <= ypixel;
    end
    else begin
        valid <= 0;
    end   
end

endmodule
