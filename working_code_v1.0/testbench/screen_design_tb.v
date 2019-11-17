`timescale 1ns / 1ps

module screen_design_tb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire h_sync;
	wire v_sync;
	wire r_out;
	wire g_out;
	wire b_out;

	// Instantiate the Unit Under Test (UUT)
	screen_design uut (
		.clk(clk), 
		.rst(rst), 
		.h_sync(h_sync), 
		.v_sync(v_sync), 
		.r_out(r_out), 
		.g_out(g_out), 
		.b_out(b_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #2 clk = ~clk;
      
endmodule

