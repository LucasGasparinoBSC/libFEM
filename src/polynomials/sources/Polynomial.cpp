#include "Polynomial.h"

std::vector<float> Polynomial::getPolyGrid()
{
    return polyGrid;
}

std::vector<float> Polynomial::getPolyVals()
{
    return polyVals;
}

std::vector<float> Polynomial::getPolyDerivVals()
{
    return polyDerivVals;
}

std::vector<float> Polynomial::polyCreateGrid()
{
    return polyGrid;
}

std::vector<float> Polynomial::polyEval(float xi)
{
    float aux;
    for (long unsigned int i = 0; i < polyOrder+1; i++)
    {
        aux = 1.0;
        for (long unsigned int j = 0; j < polyOrder+1; j++)
        {
            if ( j != i )
            {
                aux *= (xi-polyGrid[j])/(polyGrid[i] - polyGrid[j]);
            }
        }
        polyVals.push_back(aux);
    }
    return polyVals;
}

std::vector<float> Polynomial::polyEvalDeriv() // TODO: Implement this
{
    return polyDerivVals;
}