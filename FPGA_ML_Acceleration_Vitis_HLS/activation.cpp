#include "activation.h"

void Activation(
  unsigned int activation_mode,
  Poly_coeff_t coeff[kNumActivationFunctions][POLY_ORDER+1],
  NL_inp_arg_t z,
  NL_out_arg_t *y
){
#pragma HLS ARRAY_PARTITION dim=0 type=complete variable=coeff
#pragma HLS PIPELINE II=1
    NL_out_arg_t abs_z;
    NL_out_arg_t y_tmp;

    if (activation_mode == SIGMOID)
        abs_z = abs(float(z));
    if (activation_mode == TANH)
        abs_z = abs(float(2*z));

    y_tmp = coeff[activation_mode][0] + coeff[activation_mode][1]*abs_z + coeff[activation_mode][2]*abs_z*abs_z;

    if (z < 0.0)
        y_tmp = 1 - y_tmp;

    if (activation_mode == SIGMOID)
    {
        if (z > ZMAX_LOC)
            y_tmp = 1;
        else if (z < ZMIN_LOC)
            y_tmp = 0;
        *y = y_tmp;
    }
    else if (activation_mode == TANH)
    {
        if (z > ZMAX_LOC/2)
            y_tmp = 1;
        else if (z < ZMIN_LOC/2)
            y_tmp = 0;
        *y = (2*y_tmp) - 1;
    }
}
