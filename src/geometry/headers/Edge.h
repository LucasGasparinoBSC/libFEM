/**
 * @file Edge.h
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines an edge object type.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Header guard
#ifndef EDGE_H
#define EDGE_H

// STL libraries
#include <vector>
#include <cmath>

// Classes to include
#include "Point.h"

class Edge
{
    private:
        // Data
        int eID;                   // Edge ID
        int eNumPoints;            // Number of points in the edge
        float eLength;             // Length of the edge
        std::vector<Point> ePoint; // Edge points
        // Methods
    public:
        // Data
        // Methods

        // Constructor
        Edge(int n1, int n2);
        // Destructor
        ~Edge();

        // Getters
        int getEdgeID();
        int getEdgeNumPoints();
        float getEdgeLength();

        // Setters

        // Other methods
        void computeEdgeLength();
};

#endif