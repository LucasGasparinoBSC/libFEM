#include "Polynomial.h"

std::vector<float> Polynomial::polyCreateGrid()
{
    return polyGrid;
}

std::vector<float> Polynomial::polyEval(float xi)
{
    float aux;
    for (long unsigned int i = 0; i < polyOrder+1; i++)
    {
        aux = 0.0;
        for (long unsigned int j = 0; j < polyOrder+1; j++)
        {
            if ( j != i )
            {
                aux *= (polyGrid[i] - polyGrid[j]);
            }
        }
    }
}