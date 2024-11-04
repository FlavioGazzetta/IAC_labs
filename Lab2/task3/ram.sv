module ram (
  input logic clk,          // clock signal
  input logic [8:0] addr_wr, // 9-bit write address
  input logic [8:0] addr_rd, // 9-bit read address
  input logic [7:0] data_in, // 8-bit input data 
  input logic wr_en,         // write enable signal
  output logic [7:0] data_out // 8-bit data output
);

  // Define a 512x8-bit RAM
  logic [7:0] ram_memory [0:511];

  // Write operation
  always_ff @(posedge clk) begin
    if (wr_en) begin
      ram_memory[addr_wr] <= data_in; // Write data to the specified address
    end
  end

  // Read operation
  always_ff @(posedge clk) begin
    data_out <= ram_memory[addr_rd]; // Read data from the specified address
  end

endmodule
