`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:25:32 11/06/2019
// Design Name:   pixel_itr
// Module Name:   /home/shivansh/vlsi-project/vlsi-proj-new/pixel_itr_tb.v
// Project Name:  vlsi-proj-new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pixel_itr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pixel_itr_tb;

	// Inputs
	reg clk;
	reg pix_clk;
	reg rst;

	// Outputs
	wire [9:0] pix_x;
	wire [8:0] pix_y;
	wire h_sync;
	wire v_sync;
	wire draw_active;
	wire screen_end;
	wire draw_end;

	// Instantiate the Unit Under Test (UUT)
	pixel_itr uut (
		.clk(clk), 
		.pix_clk(pix_clk), 
		.rst(rst), 
		.pix_x(pix_x), 
		.pix_y(pix_y), 
		.h_sync(h_sync), 
		.v_sync(v_sync), 
		.draw_active(draw_active), 
		.screen_end(screen_end), 
		.draw_end(draw_end)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pix_clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #2 clk = ~clk;
	always #4 pix_clk = ~pix_clk;
	
      
endmodule

