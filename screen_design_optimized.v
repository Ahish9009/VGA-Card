module pixel_itr(
    input wire clk,
    //input wire pix_clk,
    input wire rst,
    output wire [9:0] pix_x,
    output wire [9:0] pix_y,
    output wire h_sync,
    output wire v_sync,
    output wire draw_active,
    output wire screen_end,
    output wire draw_end
    );
	 
	// FOR 800 X 600
    parameter h_sync_strt = 56;          
    parameter h_sync_end  = 56 + 120;         
    parameter v_sync_strt = 600 + 37;        
    parameter v_sync_end  = 600 + 37 + 6;   
    parameter h_draw_min  = 56 + 120 + 64;   
    parameter v_draw_max  = 600 - 1;            
    parameter h_max = 1040;           
    parameter v_max = 666 - 1;
	 
	// FOR 640 X 480
    // parameter h_sync_strt = 16;          
    // parameter h_sync_end  = 16 + 96;         
    // parameter v_sync_strt = 480 + 10;        
    // parameter v_sync_end  = 480 + 10 + 2;   
    // parameter h_draw_min  = 16 + 96 + 48;   
    // parameter v_draw_max  = 480 - 1;            
    // parameter h_max = 800;           
    // parameter v_max = 525 - 1;

    reg [9:0] h_pos=0;
	 reg [9:0] v_pos=0; 
	 
    // --------------- SYNC SIGNALS BLOCK ---------------
    assign h_sync = (h_pos >= h_sync_strt && h_pos < h_sync_end) ? 1 : 0;
    assign v_sync = (v_pos >= v_sync_strt && v_pos < v_sync_end) ? 1 : 0;
    // --------------------------------------------------

    // -------------- PIXEL POSITION BLOCK --------------
    //assign pix_x = (h_pos >= h_draw_min) ? h_pos : 0;        
	 //assign pix_y = (v_pos <= v_draw_max) ? v_pos : v_draw_max;        
    // --------------------------------------------------
		
	 // -------------- PIXEL POSITION BLOCK --------------
    assign pix_x = (h_pos >= h_draw_min) ? h_pos : 0;        
	 assign pix_y = (v_pos <= v_draw_max) ? v_pos : v_draw_max;        
    // --------------------------------------------------

    // -------- BLANKING / DRAWING PERIOD BLOCK ---------
    assign draw_active = (h_pos < h_draw_min | v_pos > v_draw_max) ? 0 : 1;
    // --------------------------------------------------

    // ----------------- LIMITS BLOCK -------------------
    assign screen_end = (h_pos == h_max & v_pos == v_max);
    assign draw_end = (h_pos == h_max & v_pos == v_draw_max);
    // --------------------------------------------------
    
    // ------------------ MAIN BLOCK --------------------
    always @ (posedge clk) begin
        if (rst) begin
            h_pos <= 0; 
            v_pos <= 0;
        end

        //if(pix_clk) begin
            if (h_pos < h_max) begin
                h_pos <= h_pos + 1; 
            end
            else begin
                h_pos <= 0;
                v_pos <= v_pos + 1;
            end

            if (v_pos == v_max) begin
                    v_pos <= 0;
            end
        //end
    end
    // --------------------------------------------------

endmodule
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
	output b_out
);

//---------------GENERATING PIXEL CLOCK----------------------
reg count = 0, pix_clk = 0;


//-----------------------------------------------------------

//-------------GETTING CURRENT PIXEL COORDINATES-------------
wire [10:0] pix_x;
wire [10:0] pix_y;

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
