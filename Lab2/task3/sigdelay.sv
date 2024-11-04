module sigdelay (
  input logic clk,
  input logic rst,
  input logic wr,            // write enable signal
  input logic rd,            // read enable signal
  input logic [8:0] offset,  // 9-bit read address offset
  input logic [7:0] mic_signal, // audio signal from the microphone
  output logic [7:0] delayed_signal // delayed signal output
);

  logic [8:0] addr_wr;   // write address
  logic [8:0] addr_rd;   // read address
  logic [7:0] ram_data_out; // output read from RAM

  // write address counter
  always_ff @(posedge clk or posedge rst) begin
    if (rst)
      addr_wr <= 9'd0;
    else if (wr)
      addr_wr <= addr_wr + 1; // write to the next address each clock cycle
  end

  // read address is calculated from the write address and offset
  assign addr_rd = addr_wr + offset;

  // instantiate dual-port RAM
  ram audio_ram (
    .clk(clk),
    .addr_wr(addr_wr),
    .addr_rd(addr_rd),
    .data_in(mic_signal),
    .wr_en(wr),
    .data_out(ram_data_out)
  );

  // delayed signal output
  assign delayed_signal = ram_data_out;

endmodule
