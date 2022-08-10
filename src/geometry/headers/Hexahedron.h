/**
 * @file Hexahedron.h
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines the methods of the Hexahedron class.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Header guards
#ifndef HEXAHEDRON_H
#define HEXAHEDRON_H

// STL libraries
#include <vector>
#include <cmath>

// Classes to include
#include "Element.h"

class Hexahedron : public Element
{
    private:
        // Data
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Hexahedron(long unsigned int n1, long unsigned int n2, std::vector<Point> p);
        // Destructor
        ~Hexahedron();
        // Getters
        // Setters
        // Other methods
        void buildHexaEdges();
        void buildHexaFaces();
};

#endif // HEXAHEDRON_H