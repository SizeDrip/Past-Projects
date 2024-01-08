#include <stdio.h>
#include <stdlib.h>
#include "arch.h"

// Function to get an instruction by its number
INST get_instruction_by_number(int num) {
    for (int i = 0; i < NUM_OF_INST; i++) {
        if (inst[i].num == num) {
            return inst[i];
        }
    }
    // Return an empty instruction if not found
    INST empty_inst;
    empty_inst.num = -1;  // Indicating invalid instruction
    return empty_inst;
}

/*******************************
main
*******************************/
int main() {
    int i, j;
    int done = 0;
    int cycle = 0;
    int num_issued_inst = 0;

    init_inst();
    init_fu();

    printf("============== TEST INSTRUCTION SEQUENCE ===========\n");
    print_program();

    init_rs();    // initialize RS entries
    init_regs();  // initialize registers
    init_mem();   // initialize memory
    init_rob();   //initialize ROB

    printf("* CYCLE %d (initial state)\n", cycle);
    print_rs();   // print initial RS state
    print_regs(); // print initial register state

    /* simulation loop main */
    while (!done) {
        /* increment the cycle */
        cycle++;
        printf("\n--- Cycle %d ---\n", cycle);
        
        /*for (int i = 0; i < 9; i++)
            print_rob_entry(i);*/
        /********************************
         *     Step IV: Commit 
         ********************************/
        if (commit_from_rob()) { //NOT REACHING THIS POINT
            printf("Committed instruction from ROB head.\n");
            // Handle branch misprediction if needed
        }
        
	/********************************
 	*     Step III: Forward Results and Clear RS
 	********************************/
	for (i = 1; i <= NUM_RS_ENTRIES; i++) {
    	    RS* curr_rs = get_rs(i);
    	    if (curr_rs != NULL && curr_rs->is_busy && curr_rs->is_result_ready) {
            // Forward result to waiting instructions in RS
            for (j = 1; j <= NUM_RS_ENTRIES; j++) {
                RS* waiting_rs = get_rs(j);
                if (waiting_rs != NULL && waiting_rs->is_busy) {
                    if (waiting_rs->Qj == curr_rs->rob_id) {
                        waiting_rs->Vj = curr_rs->result;
                        waiting_rs->Qj = 0;
                        printf("Forwarding Vj: Updating RS#%d Vj from %d to %d\n", j, waiting_rs->Vj, curr_rs->result);
                    }
                    if (waiting_rs->Qk == curr_rs->rob_id && waiting_rs->Qk != waiting_rs->Qj) {
                        waiting_rs->Vk = curr_rs->result;
                        waiting_rs->Qk = 0;
                        printf("Forwarding Vk: Updating RS#%d Vk from %d to %d\n", j, waiting_rs->Vk, curr_rs->result);
                    }
                }
            }

            // Clear the RS entry now that its result is in the ROB
            curr_rs->is_busy = false;
            curr_rs->is_result_ready = false;
            printf("Cleared RS entry %d\n", i);
        }
    }


        /*******************************************
         *     Step II & III: Execute & Write to ROB
         *******************************************/
        for (i = 1; i <= NUM_RS_ENTRIES; i++) {
            RS* curr_rs = get_rs(i);
            //printf("RS Entry #%d - Op: %d, is_busy: %s, Qj: #%d, Qk: #%d, remaining execution cycles: %d\n", i, curr_rs->op, curr_rs->is_busy ? "true" : "false", curr_rs->Qj, curr_rs->Qk, curr_rs->exec_cycles);
            if (curr_rs != NULL && curr_rs->is_busy && curr_rs->Qj == 0 && curr_rs->Qk == 0) {
                bool is_fu_available = false;
                printf("Current operation = %d\n", curr_rs->op);
                switch (curr_rs->op) {
                    case ADD:
                    case SUB:
                    case ADDI:
                    case BNE:
                    	printf("BNE: Potential Branching from instruction #%d\n", curr_rs->inst_num);
                        is_fu_available = is_add_available;
                        break;
                    case MUL:
                    case DIV:
                        is_fu_available = is_mul_available;
                        break;
                    case LD:
                    case ST:
                        is_fu_available = is_mem_available;
                        break;
                }
		printf("Functional Unit Available: %s\n", is_fu_available ? "true" : "false");
                if (is_fu_available) {
                    printf("Executing instruction #%d\n", curr_rs->inst_num);
                    // Execute instruction
                    switch (curr_rs->op) {
                        case ADD:
                            if (curr_rs->exec_cycles > 0) {
                                curr_rs->exec_cycles--;
                            }
                            if (curr_rs->exec_cycles == 0)
                            {
                                curr_rs->result = curr_rs->Vj + curr_rs->Vk;
                                printf("Value of memory[%d] = %d\n", curr_rs->Vj + curr_rs->A, curr_rs->result);
                                update_rob(curr_rs->rob_id, curr_rs->result);
                                curr_rs->is_result_ready = true;
                            }
                            break;
                        case SUB:
                            if (curr_rs->exec_cycles > 0) {
                                curr_rs->exec_cycles--;
                            }
                            if (curr_rs->exec_cycles == 0)
                            {
                                curr_rs->result = curr_rs->Vj - curr_rs->Vk;
                                printf("Value of memory[%d] = %d\n", curr_rs->Vj + curr_rs->A, curr_rs->result);
                                update_rob(curr_rs->rob_id, curr_rs->result);
                                curr_rs->is_result_ready = true;
                            }
                            break;
                        case MUL:
                            if (curr_rs->exec_cycles > 0) {
                                curr_rs->exec_cycles--;
                            }
                            if (curr_rs->exec_cycles == 0)
                            {
                                curr_rs->result = curr_rs->Vj * curr_rs->Vk;
                                printf("Result should equal %d * %d. It actually equals %d.\n", curr_rs->Vj, curr_rs->Vk, curr_rs->result);
                                printf("Value of memory[%d] = %d\n", curr_rs->Vj + curr_rs->A, curr_rs->result);
                                update_rob(curr_rs->rob_id, curr_rs->result);
                                curr_rs->is_result_ready = true;
                                printf("Multiplication complete.\n");
                            }
                            break;
                        case DIV:
                            if (curr_rs->exec_cycles > 0) {
                                curr_rs->exec_cycles--;
                            }
                            if (curr_rs->exec_cycles == 0)
                            {
                                curr_rs->result = curr_rs->Vj / curr_rs->Vk; // Add divide by zero handling
                                printf("Value of memory[%d] = %d\n", curr_rs->Vj + curr_rs->A, curr_rs->result);
                                update_rob(curr_rs->rob_id, curr_rs->result);
                                curr_rs->is_result_ready = true;
                            }
                            break;
                        case LD:
                            if (curr_rs->exec_cycles > 0) {
                                curr_rs->exec_cycles--;
                            }
                            if (curr_rs->exec_cycles == 0) {
                                curr_rs->result = get_mem(curr_rs->Vj + curr_rs->A); //get mem address
                                printf("Value of memory[%d] = %d\n", curr_rs->Vj + curr_rs->A, curr_rs->result);
                                update_rob(curr_rs->rob_id, curr_rs->result);
                                curr_rs->is_result_ready = true;
                            }
                            break;
                        case ST:
                            if (curr_rs->exec_cycles > 0) {
                                curr_rs->exec_cycles--;
                            }
                            if (curr_rs->exec_cycles == 0) {
                                curr_rs->A = curr_rs->Vj + curr_rs->A; // Calculate effective address
                                // The actual store to memory will be handled in Step III (Write result)
                                update_rob(curr_rs->rob_id, curr_rs->A);
                                curr_rs->is_result_ready = true;
                            }
                            break;
                        case ADDI:
        		    if (curr_rs->exec_cycles > 0) {
        		        curr_rs->exec_cycles--;
    			    }
    			    if (curr_rs->exec_cycles == 0) {
        			curr_rs->result = curr_rs->Vj + curr_rs->A; // A holds the immediate value
        			printf("Result should equal %d + %d. It actually equals %d.\n", curr_rs->Vj, curr_rs->A, curr_rs->result);
        			update_rob(curr_rs->rob_id, curr_rs->result);
        			/*for (int i = 0; i < 9; i++)
            			    print_rob_entry(i);*/
        			printf("ROB #%d updated with result %d - ADDI\n", curr_rs->rob_id, curr_rs->result);
        			curr_rs->is_result_ready = true;
    			    }
        		    break;
    			case BNE:
    			    printf("BNE Execution Cycles Remaining: %d\n", curr_rs->exec_cycles);
    			    printf("BNE Immediate Value: %d\n", curr_rs->A);
    			    //printf("BNE Functional Unit Available: %s\n", is_fu_available ? "true" : "false");
        		    if (curr_rs->exec_cycles > 0) {
        			curr_rs->exec_cycles--;
    			    }
    			    if (curr_rs->exec_cycles == 0) {
        		        if (curr_rs->Vj != curr_rs->Vk) {
        		            int branch_target = curr_rs->inst_num + curr_rs->A; // curr_rs->A should be negative to go back		
        		            printf("BNE: Branching to instruction #%d\n", branch_target);
            			    num_issued_inst = branch_target - 1;
            			    curr_rs->result = 0;
            			    flush_rob(curr_rs->rob_id);
            			    init_rs();
        			}
        			else if (curr_rs->Vj == curr_rs->Vk){
        			    printf("BNE misprediction detected. Correcting branch prediction.\n");
        			    printf("Current inst num = %d\n", curr_rs->inst_num);
        			    num_issued_inst = curr_rs->inst_num; // Reset to the correct instruction
        			    flush_rob(curr_rs->rob_id);
        			    //init_rs();
        			}
        			update_rob(curr_rs->rob_id, curr_rs->result);
        			curr_rs->is_result_ready = true;
    			    }
        		    break;
                    }
                    /*if (curr_rs->op != LD && curr_rs->op != ST) {
                        curr_rs->is_result_ready = true;
                    }*/
                    curr_rs->in_exec = true; // Set to true to indicate execution
                }
            }
        }

        /********************************
         *     Step I: Issue 
         ********************************/
        printf("Before issuing: inst[%d].num=%d, inst[%d].rt=%d\n", num_issued_inst, inst[num_issued_inst].num, num_issued_inst, inst[num_issued_inst].rt);
        if (num_issued_inst < NUM_OF_INST) {
            INST curr_inst = inst[num_issued_inst];
            int cand_rs_id; 
            switch (curr_inst.op) {
                case ADD:
                case SUB:
                    printf("STEP 1: ADD or SUB op detected.\n");
                    cand_rs_id = obtain_available_rs(ADD_RS);
                    break;
                case MUL:
                case DIV:
                    printf("STEP 1: MUL or DIV op detected.\n");
                    cand_rs_id = obtain_available_rs(MUL_RS);
                    break;
                case LD:
                case ST:
                    printf("STEP 1: LD or ST op detected.\n");
                    cand_rs_id = obtain_available_rs(LD_BUF);
                    break;
                case ADDI:
                    printf("STEP 1: ADDI op detected.\n");
        	    cand_rs_id = obtain_available_rs(ADD_RS); // assuming ADDI uses the ADD reservation station
        	break;
    		case BNE:
    		    printf("STEP 1: BNE op detected.\n");
        	    cand_rs_id = obtain_available_rs(ADD_RS); // assuming BNE uses the ADD reservation station
        	break;
        	default:
            cand_rs_id = -1;
            }
	    RS *curr_rs = get_rs(cand_rs_id);
            if (cand_rs_id != -1) {
                int rob_index = add_to_rob(curr_inst, curr_inst.rd); //curr_rs->id
                curr_rs->rob_id = rob_index;
                if (rob_index == -1) {
                    printf("Error: ROB is full - cannot issue instruction.\n");
                    exit(1);
                }
                else {
                    //RS *curr_rs = get_rs(cand_rs_id);
                    if (curr_rs == NULL) {
                        printf("No RS found with the given id\n");
                    	exit(1);
                        }
                }

                curr_rs->is_busy = true;
                curr_rs->op = curr_inst.op;
                curr_rs->inst_num = curr_inst.num;
                //printf("Issued instruction #%d to RS entry %d\n", curr_inst.num, cand_rs_id);
                
                // Set immediate field for BNE
    		if (curr_inst.op == BNE) {
    		    num_issued_inst = curr_inst.num + curr_inst.imm - 1;
    		    printf("Step 1: BNE immediate = %d\n", curr_inst.imm);
        	    curr_rs->A = curr_inst.imm;
    		}
    		
    		if (curr_inst.op == ADDI) {
    		    printf("Step 1: ADDI constant = %d\n", curr_inst.rt);
    		    curr_rs->A = curr_inst.rt;
    		}

                // Handle source and target registers
                curr_rs->Vj = (regs[curr_inst.rs].Qi == 0) ? regs[curr_inst.rs].val : -1;
                curr_rs->Qj = regs[curr_inst.rs].Qi;

                if (curr_inst.op != LD && curr_inst.op != ST) {
                    curr_rs->Vk = (regs[curr_inst.rt].Qi == 0) ? regs[curr_inst.rt].val : -1;
                    printf("Vk (rt) = %d\n", curr_rs->Vk);
                    curr_rs->Qk = regs[curr_inst.rt].Qi;
                }

                if (curr_inst.op == LD || curr_inst.op == ST) { //this may need to be changed to be like BNE
                    curr_rs->A = curr_inst.rt; // Assuming immediate offset for LD/ST
                }

                if (curr_inst.rd != -1) {
                regs[curr_inst.rd].Qi = rob_index;
            }
            
            if (curr_inst.op == MUL) {
                printf("Issue MUL: RS#%d Vk=%d (RT=%d), Qk=%d\n", cand_rs_id, curr_rs->Vk, curr_inst.rt, curr_rs->Qk);
            }

                // Set execution cycles
                switch (curr_inst.op) {
                    case ADD:
                        curr_rs->exec_cycles = LAT_ADD;
                        break;
                    case SUB:
                        curr_rs->exec_cycles = LAT_SUB;
                        break;
                    case MUL:
                        curr_rs->exec_cycles = LAT_MUL;
                        break;
                    case DIV:
                        curr_rs->exec_cycles = LAT_DIV;
                        break;
                    case LD:
                        curr_rs->exec_cycles = LAT_LD;
                        break;
                    case ST:
                        curr_rs->exec_cycles = LAT_ST;
                        break;
                    case ADDI:
                    	curr_rs->exec_cycles = LAT_ADDI;
                    	break;
                    case BNE:
                        curr_rs->exec_cycles = LAT_BNE;
                        break;
                }
		printf("Issued instruction #%d to RS entry %d and ROB entry %d\n", curr_inst.num, cand_rs_id, rob_index);
                num_issued_inst++;
            }
        }

        // Print out the result
        printf("* CYCLE %d\n", cycle);
        print_rs();
        print_regs();
        
        // Check the termination condition
        if (num_issued_inst >= NUM_OF_INST && !is_rs_active()) {
            done = 1;
        }
        printf("After issuing: inst[%d].num=%d, inst[%d].rt=%d\n", num_issued_inst, inst[num_issued_inst].num, num_issued_inst, inst[num_issued_inst].rt);
    }
    return 0;
}

