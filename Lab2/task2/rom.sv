module rom #(
  parameter ADDRESS_WIDTH = 8,
  parameter DATA_WIDTH = 8,
  parameter OFFSET = 100
)(
  input  logic                       clk,
  input  logic  [ADDRESS_WIDTH-1:0]  addr,
  output logic  [DATA_WIDTH-1:0]     dout,
  output logic  [DATA_WIDTH-1:0]     dout2
);

  logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

  logic [ADDRESS_WIDTH-1:0] addr1;

  always_comb begin
    addr1 = addr + OFFSET;
  end

  initial begin
    $display("Loading rom.1");
    $readmemh("sinerom.mem", rom_array);
  end;

  always_ff @(posedge clk)begin
    // output is synchronous
    dout <= rom_array [addr];
    dout2 <= rom_array [addr1];
  end

endmodule
