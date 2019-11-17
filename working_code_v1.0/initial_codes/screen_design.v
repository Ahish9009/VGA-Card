`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:30:25 11/05/2019 
// Design Name: 
// Module Name:    design 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module screen_design(
	input clk,
	input rst,
	output h_sync,
	output v_sync,
	output r_out,
	output g_out,
	output b_out,
	output temp
);

//---------------GENERATING PIXEL CLOCK----------------------
reg count = 0, pix_clk = 0;

always @(posedge clk) begin
	
	if (rst == 1) begin
		count <= 0;
		pix_clk <= 0;
	end 
	if (count == 1) begin
		pix_clk <= 1;
		count <= 0;
	end 
	else begin
		pix_clk <= 0;
		count <= count + 1;

	end
end

//-----------------------------------------------------------

//-------------GETTING CURRENT PIXEL COORDINATES-------------
wire [9:0] pix_x;
wire [8:0] pix_y;

pixel_itr show(
	.clk(clk),
   .pix_clk(pix_clk),
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
assign win4 = (( pix_x > 335) & (pix_y > 120) & ( pix_x < 385 ) & ( pix_y < 170 )) ? 1 : 0;

assign r_out = win1 | win4;
assign g_out = win2 | win4;
assign b_out = win3;

//assign r_out = 1;
//assign g_out = 1;
//assign b_out = 1;
assign temp = pix_clk;

//-----------------------------------------------------------


endmodule
