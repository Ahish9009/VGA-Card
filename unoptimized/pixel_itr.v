module pixel_itr(
    input wire clk,
    //input wire pix_clk,
    input wire rst,
    output wire [11:0] pix_x,
    output wire [11:0] pix_y,
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

    reg [11:0] h_pos=0;
	reg [11:0] v_pos=0; 
	 
    // --------------- SYNC SIGNALS BLOCK ---------------
    assign h_sync = (h_pos >= h_sync_strt && h_pos < h_sync_end && h_pos >=0 && v_pos >=0) ? 1 : 0;
    assign v_sync = (v_pos >= v_sync_strt && v_pos < v_sync_end && h_pos >=0 && v_pos >=0) ? 1 : 0;
    // --------------------------------------------------

    // -------------- PIXEL POSITION BLOCK --------------
    //assign pix_x = (h_pos >= h_draw_min) ? h_pos : 0;        
	 //assign pix_y = (v_pos <= v_draw_max) ? v_pos : v_draw_max;        
    // --------------------------------------------------
		
	 // -------------- PIXEL POSITION BLOCK --------------
    assign pix_x = (h_pos >= h_draw_min && h_pos >=0) ? h_pos : 0;        
	 assign pix_y = (v_pos <= v_draw_max && v_pos >=0) ? v_pos : v_draw_max;        
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