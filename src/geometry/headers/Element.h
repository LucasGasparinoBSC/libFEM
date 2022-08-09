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
#include <cmath>

// Classes to include
#include "Point.h"
#include "Edge.h"
#include "Face.h"

class Element
{
    private:
        // Data
        // Methods
    protected:
        // Data
        int elemID;                   // Element ID
        int elemNumPoints;            // Number of points in the element
        int elemNumEdges;             // Number of edges in the element
        int elemNumFaces;             // Number of faces in the element
        int elemOrder;                // Order of the element
        std::vector<Point> elemPoint; // Element points
        std::vector<Edge> elemEdge;   // Element edges
        std::vector<Face> elemFace;   // Element faces
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Element();
        // Destructor
        ~Element();
        // Getters
        // Setters
        // Other methods
};

#endif // ELEMENT_H