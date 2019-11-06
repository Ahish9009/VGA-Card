`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:35:26 11/06/2019
// Design Name:   top
// Module Name:   /home/shivansh/vlsi-project/vlsi_proj_xilinx/test_tb.v
// Project Name:  vlsi_proj_xilinx
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_tb;

	// Inputs
	reg CLK;
	reg RST_BTN;

	// Outputs
	wire VGA_HS_O;
	wire VGA_VS_O;
	wire VGA_R;
	wire VGA_G;
	wire VGA_B;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.CLK(CLK), 
		.RST_BTN(RST_BTN), 
		.VGA_HS_O(VGA_HS_O), 
		.VGA_VS_O(VGA_VS_O), 
		.VGA_R(VGA_R), 
		.VGA_G(VGA_G), 
		.VGA_B(VGA_B)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RST_BTN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #5 CLK = ~CLK;
      
endmodule

