#ifndef CHEBYSHEV_H
#define CHEBYSHEV_H

#include <vector>
#include <cmath>
#include "Polynomial.h"

class Chebyshev : public Polynomial
{
    private:
        std::vector<float> polyCreateGrid(); // TODO: Implement this
    public:
        Chebyshev(long unsigned int n1); // TODO: Implement this
        ~Chebyshev();
};

#endif