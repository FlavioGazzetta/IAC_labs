module counter #(
  parameter WIDTH = 8
)(
  // interface signals
  input  logic             clk,      // clock
  input  logic             rst,      // reset
  input  logic             ld,       // load counter from data
  input  logic             en,
  input  logic [WIDTH-1:0] ec11,
  input  logic [WIDTH-1:0] v,        // value to preload
  output logic [WIDTH-1:0] count     // count output
);

always_ff @ (posedge clk)
  if (en) count <= ec11;
  else     count <= ld ? v : count + {{WIDTH-1{1'b0}},1'b1};
endmodule
