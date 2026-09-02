# FPGA ML Acceleration with Vitis HLS

Graduate coursework project implementing a small MNIST multilayer perceptron (MLP) as synthesizable C++ using AMD/Xilinx Vitis HLS.

## Project summary

The project trains a **784 → 25 → 10** MLP in Keras, exports the learned parameters, converts the inference path to fixed-point arithmetic, and synthesizes the C++ design into RTL with Vitis HLS. A C/RTL co-simulation testbench evaluates 5,000 MNIST images and compares predictions against the ground-truth labels.

### Reported implementation results

- Keras software-model accuracy: **94.18%**
- HLS C/RTL co-simulation accuracy: **90.58%** on 5,000 images
- Implemented clock period: **7.255 ns** (**138 MHz**)
- Initiation interval reported by the final implementation: **228 cycles**
- Resource use: **15 DSP48**, **1,858 LUT**, **1,679 FF**, **0 BRAM18K**

The report identifies the activation-function path as a major throughput limitation and fixed-point quantization as the main source of accuracy loss.

## Implementation

- `MLP_Base_Code_fixed.ipynb` — Keras training/export notebook used to generate model parameters.
- `mlp.cpp` / `mlp.h` — top-level fixed-point MLP inference path and the two matrix-multiply layers.
- `activation.cpp` / `activation.h` — sigmoid/tanh polynomial-approximation logic and HLS directives.
- `weights.h` — exported trained weights and biases.
- `tb_activation.cpp` — testbench that loads activation coefficients, runs the MLP across MNIST samples, computes predictions, and reports accuracy.
- `sigmoid.dat` / `tanh.dat` — polynomial coefficients used by the activation approximation.
- `Lab_4_Report.pdf` — final lab report with methodology, synthesis results, resource use, timing, and analysis.

The original Vitis project directory also contained a large amount of generated synthesis, implementation, IDE, and co-simulation output. Those generated artifacts are intentionally excluded from this portfolio copy.

## Notes on throughput

The achieved **138 MHz clock frequency is not the same thing as 138 million inferences per second**. In a pipelined HLS design, sustained throughput depends on the **initiation interval (II)**: the minimum number of clock cycles before a new loop iteration or transaction can begin. The reported II of 228 therefore indicates a substantial throughput limitation despite the relatively high clock frequency.

The activation implementation still uses floating-point types for its polynomial coefficients and intermediate values, while the MLP inputs, weights, and accumulation path use fixed-point types. This helps explain why the activation stage synthesized into a relatively long multi-cycle path and why a future version could benefit from a fully fixed-point or lookup-table/piecewise activation implementation.

## Possible next steps

- Replace the floating-point activation path with a fixed-point, LUT, or piecewise-polynomial implementation.
- Pipeline/unroll the matrix-multiply loops while balancing DSP/LUT use.
- Partition weight arrays to increase parallel memory access.
- Re-evaluate word lengths to trade accuracy against area, latency, and power.
- Measure end-to-end inference latency and sustained throughput explicitly rather than relying on clock frequency alone.
