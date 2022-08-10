#include "Lagrange.h"

Lagrange::Lagrange(long unsigned int n1)
{
    polyOrder = n1;
    numEvals = polyOrder+1;
    polyGrid = polyCreateGrid();
}

Lagrange::~Lagrange()
{
}

std::vector<float> Lagrange::polyCreateGrid()
{
    std::vector<float> polyGrid;
    return polyGrid;
}