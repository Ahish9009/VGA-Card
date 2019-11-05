module pixel_itr(
    input clk,
    input pix_clk,
    input rst,
    output [9:0] pix_x,
    output [8:0] pix_y,
    output h_sync,
    output v_sync,
    output draw_active,
    output screen_end,
    output draw_end
    );
	
    parameter h_sync_strt = 16;          
    parameter h_sync_end  = 16 + 96;         
    parameter v_sync_strt = 480 + 10;        
    parameter v_sync_end  = 480 + 10 + 2;   
    parameter h_draw_min  = 16 + 96 + 48;   
    parameter v_draw_max  = 480 - 1;            
    parameter h_max = 800;           
    parameter v_max = 525 - 1;

    reg [9:0] h_pos, v_pos; 

    // --------------- SYNC SIGNALS BLOCK ---------------
    if (h_pos >= h_sync_strt & h_pos < h_sync_end) begin
        assign h_sync = 0;
    end
    else
        assign h_sync = 1;
    end  

    if (v_pos >= v_sync_strt & v_pos < v_sync_end) begin
        assign v_sync = 0;
    end
    else
        assign v_sync = 1;
    end
    // --------------------------------------------------

    
    // -------------- PIXEL POSITION BLOCK --------------
    if (h_pos >= h_draw_min) begin
        assign pix_x = h_pos;
    end
    else
        assign pix_x = 0;        
    end

    if (v_pos <= v_draw_max) begin
        assign pix_y = v_pos;
    end
    else
        assign pix_y = v_draw_max;        
    end
    // --------------------------------------------------

    // -------- BLANKING / DRAWING PERIOD BLOCK ---------
    if (h_pos < h_draw_min | v_pos > v_draw_max) begin
        assign draw_active = 0;
    end
    else 
        assign draw_active = 1;
    end
    // --------------------------------------------------

    // ----------------- LIMITS BLOCK -------------------
    assign screen_end = (h_pos == h_max & v_pos == v_max);
    assign draw_end = (h_pos == h_max & v_pos == v_draw_max);
    // --------------------------------------------------
    
    // ------------------ MAIN BLOCK --------------------
    always @ (posedge clk) begin
        if (rst) begin
            assign h_pos = 0; 
            assign v_pos = 0;
        end

        if(pix_clk) begin
            if (h_pos < h_max) begin
                h_pos = h_pos + 1; 
            end
            else
                assign h_pos = 0;
                assign v_pos = v_pos + 1;
            end

            if (v_pos == v_max) begin
                assign v_pos = 0;
            end
        end
    end
    // --------------------------------------------------

endmodule
