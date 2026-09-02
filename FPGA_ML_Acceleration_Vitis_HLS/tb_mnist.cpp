#include "activation.h"
#include <fstream>
#include <sstream>
#include "mlp.h"

#define NL_FILENAME "poly.dat"
#define POLY_COEFFS_SIGMOID_FILENAME "sigmoid.dat"
#define POLY_COEFFS_TANH_FILENAME "tanh.dat"

void testMLP(const char* mnist_filename, Poly_coeff_t coeffs[kNumActivationFunctions][POLY_ORDER+1])
{
    std::ifstream mnist_file(mnist_filename);
    if (!mnist_file.is_open()) {
        std::cerr << "error - couldn't open MNIST file: " << mnist_filename << std::endl;
        return;
    }

    int correct_count = 0;
    int total_count = 0;
    const int TOTAL_SAMPLES = 5000;

    while (!mnist_file.eof() && total_count < TOTAL_SAMPLES)
    {
        data_t in[INPUT_SIZE];
        for (int i = 0; i < INPUT_SIZE; i++) {
            if (!(mnist_file >> in[i])) break;
        }

        int label;
        if (!(mnist_file >> label)) break;
        total_count++;

        data_t out[OUTPUT_SIZE];
        mlp(in, out, coeffs);

        int predicted_digit = 0;
        data_t max_val = out[0];
        for (int j = 1; j < OUTPUT_SIZE; j++) {
            if (out[j] > max_val) {
                max_val = out[j];
                predicted_digit = j;
            }
        }
        if (predicted_digit == label) correct_count++;
    }

    mnist_file.close();
    if (total_count == 0) {
        std::cout << "No samples found in: " << mnist_filename << std::endl;
        return;
    }
    double accuracy = (double)correct_count / (double)total_count * 100.0;
    std::cout << "MLP Accuracy on MNIST test set (" << total_count << " samples): " << accuracy << "%" << std::endl;
}
