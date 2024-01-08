/*******************************************
  operations
*********************************************/
#define NUM_OF_OP_TYPES 8
enum op_type {ADD, SUB, MUL, DIV, LD, ST, ADDI, BNE, NONE};

/* data structure for an instruction */
typedef struct instruction {
  int num; /* number: starting from 1 */
  enum op_type op; /* operation type */
  int rd; /* destination register id */
  int rs; /* source regsiter id or base register for ld/st */
  int rt; /* target regsiter id or addr offset for ld/st */
  int imm;
} INST;


#define NUM_OF_INST 5
extern INST inst[NUM_OF_INST]; /* instruction array */ 

void init_inst();
void print_inst(INST ins);
void print_program();
