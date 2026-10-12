


module inter_sync_reg(clk,
       		    a_reset_l,
      		    intr_ack_h_i,
     	            intr_h_i,
        	    sync_h_i,
         	    finish_init_i,
         	    reti_i,
         	    intr_flag_comb,
		    sync_flag_comb
        	);

   input clk;
   input a_reset_l;
   input intr_h_i;
   input intr_ack_h_i; 
   input sync_h_i;
   input reti_i;
   input finish_init_i;
   
   output sync_flag_comb;		
   output intr_flag_comb;
      
   reg intr_flag_reg;
   reg intr_flag_reg_sync;
   
   reg disable_intr;
   
   reg sync_flag_reg;	
   reg sync_flag_reg_sync;
 
   
   reg sync_flag_comb;		
   reg intr_flag_comb;
   
always@( posedge clk or negedge a_reset_l)  begin

        if (a_reset_l == 1'b0)	begin
	    sync_flag_reg_sync <= 1'b0;
            intr_flag_reg_sync <= 1'b0;
	end    
	else	begin		
	   sync_flag_reg_sync <= sync_h_i;
   	   intr_flag_reg_sync <= intr_h_i;
	end
end
   
always@(posedge clk or negedge a_reset_l)
   begin
        if (a_reset_l == 1'b0)	begin
	    intr_flag_reg <= 1'b0;
            sync_flag_reg <= 1'b0;
    	    disable_intr <= 1'b0;
	end    
        else begin	    	   	
	case(finish_init_i)
	1'b0:
		sync_flag_reg <= (sync_flag_reg_sync == 1'b1) ? 1'b1: sync_flag_reg;		 
	default:
		sync_flag_reg <= 1'b0;
 	endcase
	
	if(intr_flag_reg_sync == 1'b1)	begin
		intr_flag_reg <= (disable_intr == 1'b0) ?  1'b1 : intr_flag_reg;
		disable_intr <=  (intr_ack_h_i == 1'b1) ? 1'b1 : disable_intr;
	end
   	else begin 
		disable_intr <= (reti_i == 1'b1) ? 1'b0 : disable_intr;  
		intr_flag_reg <= (intr_ack_h_i == 1'b1) ? 1'b0 : intr_flag_reg;
    	end
     end 	
   end


always@( sync_flag_reg_sync or intr_flag_reg_sync or 
       intr_flag_reg or sync_flag_reg or finish_init_i) begin

intr_flag_comb = intr_flag_reg;
sync_flag_comb = (sync_flag_reg_sync == 1'b1) ? 1'b1: sync_flag_reg;		 

	if(intr_flag_reg_sync == 1'b1 && disable_intr == 1'b0) begin
		intr_flag_comb = 1'b1;
	end 
end
  endmodule
