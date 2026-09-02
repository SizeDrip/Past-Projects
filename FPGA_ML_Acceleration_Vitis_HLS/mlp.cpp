#include <cmath>

#include "mlp.h"
#include "activation.h"
#include "weights.h"

static ap_fixed<16,6> L1_weights[HIDDEN_SIZE][INPUT_SIZE];
static ap_fixed<16,6> L1_bias[HIDDEN_SIZE];

static ap_fixed<16,6> L2_weights[OUTPUT_SIZE][HIDDEN_SIZE];
static ap_fixed<16,6> L2_bias[OUTPUT_SIZE];

void init_weights()
{
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        L1_bias[i] = (ap_fixed<16,6>)L1_bias_f[i];
        for (int j = 0; j < INPUT_SIZE; j++) {
            L1_weights[i][j] = (ap_fixed<16,6>)L1_weights_f[i][j];
        }
    }

    for (int i = 0; i < OUTPUT_SIZE; i++) {
        L2_bias[i] = (ap_fixed<16,6>)L2_bias_f[i];
        for (int j = 0; j < HIDDEN_SIZE; j++) {
            L2_weights[i][j] = (ap_fixed<16,6>)L2_weights_f[i][j];
        }
    }
}

void mmul_layer1(const data_t input[INPUT_SIZE], data_t output[HIDDEN_SIZE])
{
    for (int i = 0; i < HIDDEN_SIZE; i++)
    {
        acc_t acc = 0;
        for (int j = 0; j < INPUT_SIZE; j++)
        {
            acc += (acc_t)L1_weights[i][j] * (acc_t)input[j];
        }
        acc += (acc_t)L1_bias[i];
        output[i] = (data_t)acc;
    }
}

void mmul_layer2(const data_t input[HIDDEN_SIZE], data_t output[OUTPUT_SIZE])
{
    for (int i = 0; i < OUTPUT_SIZE; i++)
    {
        acc_t acc = 0;
        for (int j = 0; j < HIDDEN_SIZE; j++)
        {
            acc += (acc_t)L2_weights[i][j] * (acc_t)input[j];
        }
        acc += (acc_t)L2_bias[i];
        output[i] = (data_t)acc;
    }
}

void mlp(const data_t in[INPUT_SIZE], data_t out[OUTPUT_SIZE], Poly_coeff_t coeffs[kNumActivationFunctions][POLY_ORDER+1])
{
    data_t layer1_out[HIDDEN_SIZE];
    mmul_layer1(in, layer1_out);

    for (int i = 0; i < HIDDEN_SIZE; i++)
    {
        NL_out_arg_t tmp;
        Activation(SIGMOID, coeffs, (NL_inp_arg_t)layer1_out[i], &tmp);
        layer1_out[i] = (data_t)tmp;
    }

    data_t layer2_out[OUTPUT_SIZE];
    mmul_layer2(layer1_out, layer2_out);

    for (int i = 0; i < OUTPUT_SIZE; i++)
    {
        NL_out_arg_t tmp;
        Activation(SIGMOID, coeffs, (NL_inp_arg_t)layer2_out[i], &tmp);
        layer2_out[i] = (data_t)tmp;
    }

    for (int i = 0; i < OUTPUT_SIZE; i++)
        out[i] = layer2_out[i];
}
