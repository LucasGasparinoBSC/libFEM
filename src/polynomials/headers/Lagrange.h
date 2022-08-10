#ifndef LAGRANGE_H
#define LAGRANGE_H

#include "Polynomial.h"

class Lagrange : public Polynomial
{
    private:
        std::vector<float> polyCreateGrid(); // Create a Lagrange grid of points to evaluate the polynomial
    public:
        Lagrange(long unsigned int n1);
        ~Lagrange();
};

#endif