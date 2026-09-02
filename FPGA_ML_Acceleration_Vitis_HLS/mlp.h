#ifndef MLP_H_
#define MLP_H_

#include "ap_fixed.h"
#include "activation.h"

typedef ap_fixed<16,5> data_t;
typedef ap_fixed<24,9> acc_t;

#define INPUT_SIZE 784
#define HIDDEN_SIZE 25
#define OUTPUT_SIZE 10

void init_weights();
void mmul_layer1(const data_t input[INPUT_SIZE], data_t output[HIDDEN_SIZE]);
void mmul_layer2(const data_t input[HIDDEN_SIZE], data_t output[OUTPUT_SIZE]);
void mlp(const data_t in[INPUT_SIZE], data_t out[OUTPUT_SIZE], Poly_coeff_t coeffs[kNumActivationFunctions][POLY_ORDER+1]);

#endif
