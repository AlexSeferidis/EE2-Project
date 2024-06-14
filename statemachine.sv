// INIT, CALC STAGE 1, CALC STAGE 2

module statemachine #(
)(
    input logic clk,
    input logic rst,
    input logic finished,
    input logic full_queue,
    input logic distributor_ready,
    output logic init,
    output logic en_pixel_map,
    output logic en_stage_1,
    output logic en_stage_2
);

localparam INIT = 0;
localparam CALC_STAGE_1 = 1;
localparam CALC_STAGE_2 = 2;
localparam ESCAPE = 3;
logic [1:0] state, next;

always_comb begin
    case (state)
        INIT: begin
            next = CALC_STAGE_1;
            init = 1;
            en_pixel_map = 1;
            en_stage_1 = 0;
            en_stage_2 = 0;
        end
        CALC_STAGE_1: begin
            next = CALC_STAGE_2;
            init = 0;
            en_pixel_map = 0;
            en_stage_1 = 1;
            en_stage_2 = 0;
        end
        CALC_STAGE_2: begin
            next = ESCAPE;
            init = 0;
            en_pixel_map = 0;
            en_stage_1 = 0;
            en_stage_2 = 1;
        end
        ESCAPE : begin
            next = finished ? INIT : CALC_STAGE_2;
            init = 0;
            en_pixel_map = 0;
            en_stage_1 = 1;
            en_stage_2 = 0;
        end
    endcase
end

always_ff @(posedge clk) begin
    if (rst) begin
        state <= INIT;
    end
    else if (~full_queue && ~distributor_ready) begin
        state <= next;
    end
end
endmodule
