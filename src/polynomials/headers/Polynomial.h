#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <cmath>

#include "Quadrature.h"

class Polynomial
{
    private:
    protected:
        long unsigned int polyOrder;         // Order of the polynomial
        long unsigned int numEvals;          // Number of evaluation points
        std::vector<float> polyGrid;         // Grid of points to evaluate the polynomial
        std::vector<float> polyVals;         // Array of polynomial values
        std::vector<float> polyDerivVals;    // Array of polynomial derivative values
        std::vector<float> polyCreateGrid(); // Create the grid of points to evaluate the polynomial
    public:
        std::vector<float> polyEval();
        std::vector<float> polyEvalDeriv();
};

#endif