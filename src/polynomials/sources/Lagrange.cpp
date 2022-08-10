#include "Lagrange.h"

Lagrange::Lagrange(long unsigned int n1)
{
    polyOrder = n1;
    polyGrid = polyCreateGrid();
}

Lagrange::~Lagrange()
{
}

std::vector<float> Lagrange::polyCreateGrid()
{
    polyGrid.push_back(-1.0);
    polyGrid.push_back( 1.0);
    float aux = (2.0/((float) polyOrder));
    for (long unsigned int i = 2; i < polyOrder+1; i++)
    {
        polyGrid.push_back(polyGrid[0]+aux);
        aux += aux;
    }
    return polyGrid;
}