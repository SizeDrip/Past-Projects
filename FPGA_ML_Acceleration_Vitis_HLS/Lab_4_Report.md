# ECEN 226 Lab 4 Report — MNIST MLP in Vitis HLS

**Emma Berry**  
**4 March 2025**

## Introduction

This assignment implemented a multilayer perceptron (MLP) for MNIST digit classification. The model uses 784 input nodes, 25 hidden nodes, and 10 output nodes. The model was trained in Python/Keras, its learned parameters were exported, and the inference implementation was moved into Vitis HLS using fixed-point data types. Classification accuracy was then verified using a custom HLS testbench over 5,000 MNIST images.

### Project goals

- Achieve at least 80% classification accuracy on 5,000 MNIST test images.
- Run at or below a 10 ns clock period.
- Train a 784×25×10 MLP in Keras.
- Export the trained weights.
- Implement the MLP with fixed-point data types in Vitis HLS.
- Measure BRAM, DSP48, LUT, and FF resource use after implementation.
- Record clock frequency and initiation interval.

## Methodology

### Keras model

- Architecture: 784 inputs → 25 hidden nodes → 10 outputs.
- Sigmoid activations.
- Final Keras test accuracy: **94.18%**.

### Fixed-point HLS design

The trained parameters were exported for the HLS design. The primary inference datapath uses fixed-point values:

- Input/output data: `ap_fixed<16,5>`
- Layer weights: `ap_fixed<16,6>`
- Accumulator: `ap_fixed<24,9>`

The top-level `mlp` function performs a matrix multiplication plus bias for the hidden layer, applies an activation function, performs a second matrix multiplication plus bias for the output layer, and then applies the output activation.

### Testbench

A C/RTL co-simulation testbench reads 5,000 MNIST samples, invokes the synthesized MLP, selects the largest of the ten outputs as the predicted digit, compares it to ground truth, and accumulates classification accuracy.

## Results

### Final implementation results reported in the lab

| Metric | Result |
| --- | ---: |
| BRAM18K | 0 |
| DSP48 | 15 |
| FF | 1,679 |
| LUT | 1,858 |
| SRL | 98 |
| Initiation interval | 228 cycles |
| Clock period | 7.255 ns |
| Achieved frequency | 138 MHz |
| C/RTL co-simulation accuracy | 90.58% |

The implementation exceeded the required 80% accuracy threshold and nearly reached the 150 MHz target.

## Analysis

The DSP48 blocks were primarily used by the matrix-multiplication operations. The implementation's reported initiation interval of 228 cycles was a major throughput limitation. The lab report attributed this to multi-cycle dependencies associated with the activation path.

The hardware model's 90.58% accuracy was lower than the Keras model's 94.18%. The report identified the fixed-point representation as the principal source of accuracy loss.

The archived source also shows an important optimization opportunity: while the MLP inputs, weights, and accumulators use `ap_fixed` types, the activation-function coefficients and intermediate values are floating point. A future implementation could investigate a fully fixed-point activation, lookup table, or piecewise approximation to trade numerical accuracy against latency, area, and throughput.

## Conclusion

The project successfully trained, synthesized, and verified a two-layer MNIST MLP in Vitis HLS. The design met its accuracy and clock-period goals while providing concrete experience with fixed-point inference, C-to-RTL synthesis, DSP/LUT/FF resource use, C/RTL co-simulation, and the relationship among clock frequency, latency, and initiation interval.

Potential follow-up work includes reducing activation overhead, applying loop pipelining/unrolling more aggressively, partitioning model parameter arrays for additional parallel access, and tuning fixed-point word lengths to improve the accuracy/performance/resource tradeoff.
