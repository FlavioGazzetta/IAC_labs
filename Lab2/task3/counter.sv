module counter (
  input logic clk,             // clock input
  input logic rst,             // reset signal
  input logic [7:0] incr,      // increment input, controls counter step
  output logic [7:0] addr      // output address signal
);

  logic [7:0] counter_reg;     // 8-bit counter register

  // Operate on the rising edge of the clock or when reset
  always_ff @(posedge clk or posedge rst) begin
    if (rst)
      counter_reg <= 8'b0;     // reset counter to zero
    else
      counter_reg <= counter_reg + incr; // increment counter by the increment value each clock cycle
  end

  assign addr = counter_reg;   // output the current counter value as the address
endmodule
