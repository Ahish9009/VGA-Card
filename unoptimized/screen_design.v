`timescale 1ns / 1ps

module screen_design(
	input clk,
	input rst,
	output h_sync,
	output v_sync,
	output r_out,
	output g_out,
	output b_out
);

//---------------GENERATING PIXEL CLOCK----------------------
reg count = 0, pix_clk = 0;


//-----------------------------------------------------------

//-------------GETTING CURRENT PIXEL COORDINATES-------------
wire [12:0] pix_x;
wire [12:0] pix_y;

pixel_itr show(
	.clk(clk),
   //.pix_clk(pix_clk),
	.rst(rst),
	.pix_x(pix_x),
	.pix_y(pix_y),
	.h_sync(h_sync),
	.v_sync(v_sync)
);
//-----------------------------------------------------------

//----------GENERATING WINDOWS LOGO(4 SQUARES)---------------

wire win1, win2, win3, win4;
assign win1 = (( pix_x > 255) & (pix_y > 40) & ( pix_x < 305 ) & ( pix_y < 90 )) ? 1 : 0;
assign win2 = (( pix_x > 335) & (pix_y > 40) & ( pix_x < 385 ) & ( pix_y < 90 )) ? 1 : 0;
assign win3 = (( pix_x > 255) & (pix_y > 120) & ( pix_x < 305 ) & ( pix_y < 170 )) ? 1 : 0;
assign win4 = (( pix_x > 240) & (pix_y > 0) & (pix_y < 599) & (pix_x < 1000)) ? 1 : 0;

assign r_out = win4;
assign g_out = 0;
assign b_out = 0;

//-----------------------------------------------------------


endmodule
