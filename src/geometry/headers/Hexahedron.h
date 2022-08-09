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
        std::vector<Edge> hexEdges; // Hexahedron edges
        std::vector<Face> hexFaces; // Hexahedron faces
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Hexahedron(int n1, std::vector<Point> p);
        // Destructor
        ~Hexahedron();
        // Getters
        // Setters
        // Other methods
        void buildHexaEdges(std::vector<Point> p);
        void buildHexaFaces(std::vector<Point> p);
};

#endif // HEXAHEDRON_H