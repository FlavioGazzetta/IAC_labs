module f1_fsm (
    input   logic       rst,
    input   logic       en,
    input   logic       clk,
    output  logic [7:0] data_out
);

    logic [7:0] current_state;
    logic [7:0] next_state;
    logic [7:0] sreg;

    // Next state logic
    always_comb begin
        case (current_state)
            8'b00000000: next_state = 8'b00000001;
            8'b00000001: next_state = 8'b00000011;
            8'b00000011: next_state = 8'b00000111;
            8'b00000111: next_state = 8'b00001111;
            8'b00001111: next_state = 8'b00011111;
            8'b00011111: next_state = 8'b00111111;
            8'b00111111: next_state = 8'b01111111;
            8'b01111111: next_state = 8'b11111111;
            8'b11111111: next_state = 8'b00000000;
            default: next_state = 8'b00000000;
        endcase
    end

    // State register update
    always_ff @ (posedge clk or posedge rst) begin
        if (rst) begin
            current_state <= 8'b00000000;
            sreg <= 8'b00000000;
        end else if (en) begin
            current_state <= next_state;
            sreg <= next_state;
        end
    end

    assign data_out = sreg;

endmodule
