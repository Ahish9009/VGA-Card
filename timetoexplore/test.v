`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:47:42 11/06/2019
// Design Name:   top
// Module Name:   /home/shivansh/vlsi-project/timetoexplore/test.v
// Project Name:  timetoexplore
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

module test;

	// Inputs
	reg CLK;
	reg RST_BTN;

	// Outputs
	wire VGA_HS_O;
	wire VGA_VS_O;
	wire [3:0] VGA_R;
	wire [3:0] VGA_G;
	wire [3:0] VGA_B;
	wire pix_stb;

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
	always #2 CLK=~CLK;
      
endmodule

