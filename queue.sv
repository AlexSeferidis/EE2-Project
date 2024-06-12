module queue #(
    parameter   DATA_WIDTH = 32,
                QUEUE_SIZE = 5,
                COUNTER_SIZE = 3,
                RBG_SIZE = 24
)(
    input logic                     clk,
    input logic                     reset,
    input logic                     fin_flag,
    // received from the engine
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic [DATA_WIDTH-1:0]    xpixel_i,
    input logic [DATA_WIDTH-1:0]    ypixel_i,

    //received from the comibinator to check if front of queue is the next coord
    input logic [DATA_WIDTH-1:0]    xpixel_check,
    input logic [DATA_WIDTH-1:0]    ypixel_check,

    output logic [RBG_SIZE-1:0]     colour_o,
    output logic                    full_queue,      // this flag will go to the distributor
    output logic                    en
);

logic [RBG_SIZE-1:0] colour_queue [QUEUE_SIZE-1:0];
logic [DATA_WIDTH-1:0] xqueue [QUEUE_SIZE-1:0];
logic [DATA_WIDTH-1:0] yqueue [QUEUE_SIZE-1:0];
logic [COUNTER_SIZE-1:0] counter;

initial begin
    en = 0;
    for(int i = 0; i < QUEUE_SIZE; i++)begin
        colour_queue[i] = 0;
        xqueue[i] = -1;
        yqueue[i] = -1;
    end
end

always_ff@(posedge clk)begin

    if(reset)begin
        en <= 0;
        counter <= 0;
        for(int i = 0; i < QUEUE_SIZE; i++)begin
            colour_queue[i] <= 0;
            xqueue[i] <= -1;
            yqueue[i] <= -1;
        end
    end

    else begin
        if(counter == QUEUE_SIZE - 1)begin
            full_queue <= 1;
        end
        else if (counter == 0) begin
            en <= 0;
            full_queue <= 0;
        end
        else begin
            full_queue <= 0;
        end

        if((xpixel_check == xqueue[0])&&(ypixel_check == yqueue[0]))begin
            colour_o <= colour_queue[0];
            for(int i = 0; i < QUEUE_SIZE-1; i++)begin                    
                colour_queue[i] <= colour_queue[i + 1];
                xqueue[i] <= xqueue[i+1];
                yqueue[i] <= yqueue[i+1]; 
            end
            full_queue <= 0;
            counter <= counter - 1;
        end

        if(fin_flag)begin
            en <= 1;
            colour_queue[counter] <=  colour_i;
            xqueue[counter] <= xpixel_i;
            yqueue[counter] <= ypixel_i;
            counter <= counter + 1;
        end
        // else begin
        //     en <= 0;
        // end
    end    
end

endmodule
