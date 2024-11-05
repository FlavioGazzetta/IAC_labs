module f1_des #(
  parameter N_WIDTH = 16,
  parameter D_WIDTH = 8
)(
  // interface signals
  input   logic                 clk,  // clock
  input   logic                 rst,  // reset
  input   logic                 en,   // enable
  input   logic [N_WIDTH-1:0]   N,     // tick output
  output  logic [D_WIDTH-1:0]   data_out  // output data
);

  logic  tick;

  clktick clocktick (
  .clk (clk),      // clock 
  .rst (rst),      // reset
  .en (en),       // enable signal
  .N (N),     	 // clock divided by N+1
  .tick (tick)      // tick output
  );

  f1_fsm f1 (
    .rst (rst),
    .en (tick),
    .clk (clk),
    .data_out (data_out)
  );

endmodule
