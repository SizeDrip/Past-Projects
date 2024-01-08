.PHONY: all

all: tomasulo 

inst.o: inst.h inst.c
	gcc -c inst.c

arch.o: arch.h arch.c
	gcc -c arch.c

tomasulo.o: arch.h inst.h tomasulo.c
	gcc -c tomasulo.c

tomasulo: tomasulo.o inst.o arch.o
	gcc -o tomasulo tomasulo.o inst.o arch.o


clean:
	rm -rf ./tomasulo  ./tomasulo.o  ./inst.o ./arch.o
