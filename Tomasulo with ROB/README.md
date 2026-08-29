# Tomasulo Out-of-Order Simulator with Reorder Buffer

An educational processor simulator written in C for a graduate computer-architecture assignment. The project extends a Tomasulo-style dynamic-scheduling model with hardware speculation and a reorder buffer (ROB) so instructions can execute out of order while architectural state is retired in order.

## Implemented Concepts

- Separate load, store, add, and multiply/divide reservation-station classes
- Register-status tracking and operand tags for dependency management
- Multiple functional-unit types with configurable execution latencies
- Result forwarding to dependent reservation stations
- A circular reorder buffer with issue, result update, in-order commit, and flush operations
- Speculative branch execution and branch-misprediction recovery
- Cycle-by-cycle traces of reservation stations, registers, and ROB state

## Repository Layout

- `tomasulo/tomasulo.c` — main cycle-by-cycle simulation loop, issue, execute, forwarding, and branch handling.
- `tomasulo/arch.c` / `arch.h` — architectural state, reservation stations, registers, memory, functional-unit state, and ROB operations.
- `tomasulo/inst.c` / `inst.h` — instruction definitions and test program.
- `results.txt` — a preserved simulator trace from the coursework run.
- `Homework 3 Report - ELEN 511 - Emma Berry.pdf` — assignment report and analysis.

## Build and Run

```bash
cd "Tomasulo with ROB/tomasulo"
make
./tomasulo
```

To remove generated objects and the executable:

```bash
make clean
```

## Scope and Limitations

This is a coursework simulator rather than a cycle-accurate model of a commercial processor. It uses a small fixed instruction set and fixed-size structures, and its branch and memory behavior are simplified.
