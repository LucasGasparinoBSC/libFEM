#include <iostream>
#include <vector>

#include "Lagrange.h"

int main()
{
    std::vector<Polynomial> p;
    p.push_back(Lagrange(3));
    std::vector<float> aux;
    aux = p[0].getPolyGrid();
    for (long unsigned int i = 0; i < aux.size(); i++)
    {
        std::cout << aux[i] << std::endl;
    }
    aux.clear();
    aux = p[0].polyEval(0.0);
    for (long unsigned int i = 0; i < aux.size(); i++)
    {
        std::cout << aux[i] << std::endl;
    }
    return 0;
}
