#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <cmath>


class Polynomial
{
    private:
    protected:
        long unsigned int polyOrder;         // Order of the polynomial
        std::vector<float> polyGrid;         // Grid of points to evaluate the polynomial
        std::vector<float> polyVals;         // Array of polynomial values
        std::vector<float> polyDerivVals;    // Array of polynomial derivative values
        std::vector<float> polyCreateGrid(); // Create the grid of points to evaluate the polynomial
    public:
        std::vector<float> getPolyGrid();
        std::vector<float> getPolyVals();
        std::vector<float> getPolyDerivVals(); // TODO: Implement this
        std::vector<float> polyEval(float xi);
        std::vector<float> polyEvalDeriv();
};

#endif