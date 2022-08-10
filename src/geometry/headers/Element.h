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
#include <iostream>
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
        long unsigned int elemID;        // Element ID
        long unsigned int elemNumPoints; // Number of points in the element
        long unsigned int elemNumEdges;  // Number of edges in the element
        long unsigned int elemNumFaces;  // Number of faces in the element
        long unsigned int elemOrder;     // Order of the element
        std::vector<Point> elemPoints;   // Element points
        std::vector<Edge> elemEdges;     // Element edges
        std::vector<Face> elemFaces;     // Element faces
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Element();
        // Destructor
        ~Element();
        // Getters
        long unsigned int getElemID();
        long unsigned int getElemNumPoints();
        long unsigned int getElemNumEdges();
        long unsigned int getElemNumFaces();
        long unsigned int getElemOrder();
        std::vector<Point> getElemPoints();
        std::vector<Edge> getElemEdges();
        std::vector<Face> getElemFaces();
        // Setters
        // Printer
        void printElement();
        // Other methods
};

#endif // ELEMENT_H