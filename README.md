# Selected ECE & Systems Projects

A curated archive of projects by **Emma Berry**, an M.S. Electrical and Computer Engineering software engineer focused on C/C++ systems, GPU and parallel computing, embedded firmware, computer architecture, and sensing.

Current professional spacecraft software is proprietary and is not included here. The projects below come from graduate coursework, research, internships, and team projects; individual project READMEs identify starter code, collaborators, and my specific contributions where applicable.

## Featured Projects

### [CUDA Camera–LiDAR–GPS Sensor Fusion](./2D-Sensor-Fusion-main/)

Adapted an existing CPU C++/OpenCV sensor-fusion baseline into a CUDA C++ video pipeline. Wrote a custom kernel to project 3D LiDAR points into camera coordinates, added frame-aligned GPS overlays, and achieved approximately **2.5× end-to-end throughput** over the CPU baseline. Used Nsight Compute and stage-level timing to investigate PCIe transfers, memory use, workload size, and data-ingest overhead, then removed a major binary-to-text conversion bottleneck.

**Technologies:** C++, CUDA, OpenCV, Nsight Compute, CMake, KITTI data

### [FPGA ML Acceleration with Vitis HLS](./FPGA_ML_Acceleration_Vitis_HLS/)

Mapped a Keras **784→25→10 MNIST MLP** into a fixed-point C++ implementation for Vitis HLS and verified the resulting RTL with C/RTL co-simulation. The final lab implementation ran at **138 MHz** and reached **90.58% accuracy across 5,000 MNIST images**, while exposing a large initiation-interval bottleneck in the activation path that provides a useful hardware/software optimization case study.

**Technologies:** C++, Vitis HLS, Keras, fixed-point arithmetic, FPGA synthesis, C/RTL co-simulation

### [Tomasulo Out-of-Order Simulator with Reorder Buffer](./Tomasulo%20with%20ROB/)

Implemented an educational processor simulator in C with reservation stations, result forwarding, a reorder buffer, in-order retirement, speculative branch execution, and branch-misprediction recovery. The simulator models multiple functional-unit classes and configurable execution latencies while producing cycle-by-cycle traces.

**Technologies:** C, computer architecture, out-of-order execution, speculation, ROBs

### [STM32 Bootloader Prototype](./STM32%20Bootloader%20Prototype/)

Designed a compact STM32 bootloader prototype that receives firmware-update data over UART, rewrites application flash sectors, and reboots into the updated application. The implementation was developed for resource-constrained ARM hardware and fit within a strict memory budget.

**Technologies:** C, STM32 HAL, ARM, UART, flash programming, embedded firmware

### [Technical Interview Preparation System (TIPS)](./TIPS/)

A three-person graduate-course project that uses a LangGraph/LangChain agent pipeline, retrieval-augmented generation, Hugging Face embeddings, ChromaDB, web research, and PDF export to generate role-specific interview-preparation material. The surviving materials do not preserve a reliable per-person task breakdown, so the repository presents this as a shared team deliverable by Emma Berry, Luca Chierotti, and Christina Wong.

**Technologies:** Python, PyTorch environment, LangGraph, LangChain, Hugging Face embeddings, ChromaDB, OpenAI API, Tavily, ReportLab

### [8×8 Packet Switch](./8x8_Router/) and [SPI SRAM Controller](./M23A640%20SRAM/)

RTL projects covering packet routing, FIFOs, switch-fabric behavior, external-memory control, simulation, synthesis, and gate-level verification.

**Technologies:** Verilog/SystemVerilog, RTL simulation, synthesis, digital design

### [Accessible Arcade Control System](./Inter-Abled%20and%20Adaptable%20Arcade%20Controls%20and%20Cabinet.pdf)

A team-built arcade platform with interchangeable physical controls for players with different mobility needs. My work focused on software/electrical integration, STM32-based USB-HID behavior, and connecting controller identity to application behavior.

**Technologies:** STM32, USB-HID, Python, hardware/software prototyping

## Repository Notes

This repository is a project archive rather than any sort of production codebase. Some directories preserve course reports and implementation snapshots alongside source code. The most relevant projects have detailed READMEs describing the problem, relevant contributions, results, limitations, etc.
