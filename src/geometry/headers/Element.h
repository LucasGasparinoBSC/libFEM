/**
 * @file Element.h
 * @author Lucas Gassparino (you@domain.com)
 * @brief  Defines a element object type.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ELEMENT_H
#define ELEMENT_H

// STL libraries
#include <vector>

// Classes to include
#include "Point.h"
#include "Edge.h"
#include "Face.h"

class Element
{
    private:
        // Data
        int eID;                   // Element ID
        // Methods
    protected:
        // Data
        int eNumPoints;            // Number of points in the element
        int eNumEdges;             // Number of edges in the element
        int eNumFaces;             // Number of faces in the element
        std::vector<Point> ePoint; // Element points
        std::vector<Edge> eEdge;   // Element edges
        std::vector<Face> eFace;   // Element faces
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Element();
        // Destructor
        ~Element();
};

#endif