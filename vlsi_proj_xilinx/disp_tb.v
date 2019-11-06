`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:20:30 11/06/2019
// Design Name:   test
// Module Name:   /home/shivansh/vlsi-project/vlsi_proj_xilinx/disp_tb.v
// Project Name:  vlsi_proj_xilinx
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module disp_tb;

	// Inputs
	reg i_clk;
	reg i_pix_stb;
	reg i_rst;

	// Outputs
	wire o_hs;
	wire o_vs;
	wire o_blanking;
	wire o_active;
	wire o_screenend;
	wire o_animate;
	wire [9:0] o_x;
	wire [8:0] o_y;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.i_clk(i_clk), 
		.i_pix_stb(i_pix_stb), 
		.i_rst(i_rst), 
		.o_hs(o_hs), 
		.o_vs(o_vs), 
		.o_blanking(o_blanking), 
		.o_active(o_active), 
		.o_screenend(o_screenend), 
		.o_animate(o_animate), 
		.o_x(o_x), 
		.o_y(o_y)
	);

	initial begin
		// Initialize Inputs
		i_clk = 0;
		i_pix_stb = 0;
		i_rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
	always # 5 i_clk = ~i_clk;
	always # 10 i_pix_stb = ~i_pix_stb;
      
endmodule

