#include "inst.h"
#include <stdio.h>

INST inst[NUM_OF_INST]; /* instruction array */ 
/******************************
* instruction initialization
******************************/
void init_inst()
{
  inst[0].num=1; inst[0].op=LD; inst[0].rd=0; inst[0].rs=1; inst[0].rt=0; // ld r0, 0(r1)
  inst[1].num=2; inst[1].op=MUL; inst[1].rd=4; inst[1].rs=0; inst[1].rt=2; // mul r4, r0, r2
  inst[2].num=3; inst[2].op=ST; inst[2].rd=4; inst[2].rs=1; inst[2].rt=0; // st r4, 0(r1)
  inst[3].num=4; inst[3].op=ADDI; inst[3].rd=1; inst[3].rs=1; inst[3].rt=1; // addi r1, r1, 1
  inst[4].num=5; inst[4].op=BNE; inst[4].rd=1; inst[4].rs=1; inst[4].rt=2; inst[4].imm=-4; // bne r1, r2, 0 (branch to instruction #0)
  return;
}

/*void init_inst()
{
  inst[0].num=1; inst[0].op=LD; inst[0].rd=6; inst[0].rs=12; inst[0].rt=32; // ld r6,32(r12)
  inst[1].num=2; inst[1].op=LD; inst[1].rd=2; inst[1].rs=13; inst[1].rt=44; // ld r2,44(r13)
  inst[2].num=3; inst[2].op=MUL; inst[2].rd=0; inst[2].rs=2; inst[2].rt=4; // mul r0, r2, r4
  inst[3].num=4; inst[3].op=SUB; inst[3].rd=8; inst[3].rs=2; inst[3].rt=6; // sub r8, r2, r6
  inst[4].num=5; inst[4].op=DIV; inst[4].rd=10; inst[4].rs=0; inst[4].rt=6; // div r10, r0, r6
  inst[5].num=6; inst[5].op=ADD; inst[5].rd=11; inst[5].rs=0; inst[5].rt=6; // add r11, r0, r6
  return;
}*/

/* print an instruction */
void print_inst(INST ins) {
  printf("I#%d\t",ins.num);
  if(ins.op==ADD) printf("add\tr%d,r%d,r%d\n",ins.rd,ins.rs,ins.rt);
  else if(ins.op==SUB) printf("sub\tr%d,r%d,r%d\n",ins.rd,ins.rs,ins.rt);
  else if(ins.op==MUL) printf("mul\tr%d,r%d,r%d\n",ins.rd,ins.rs,ins.rt);
  else if(ins.op==DIV) printf("div\tr%d,r%d,r%d\n",ins.rd,ins.rs,ins.rt);
  else if(ins.op==LD) printf("ld\tr%d,%d(r%d)\n",ins.rd,ins.rt,ins.rs);
  else if(ins.op==ST) printf("st\tr%d,%d(r%d)\n",ins.rd,ins.rt,ins.rs);
  else if(ins.op == ADDI) printf("addi\tr%d,r%d,%d\n",ins.rd,ins.rs,ins.rt);
  else if(ins.op == BNE) printf("bne\tr%d,r%d,%d\n",ins.rs,ins.rt,ins.imm);
  else printf("unknown\n");
}

void print_program() {
  int i=0;
  for(i=0;i<NUM_OF_INST;i++) print_inst(inst[i]);
}


