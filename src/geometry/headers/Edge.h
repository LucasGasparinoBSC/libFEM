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
#include <iostream>
#include <vector>
#include <cmath>

// Classes to include
#include "Point.h"

class Edge
{
    private:
        // Data
        long unsigned int edgeID;                    // Edge ID
        long unsigned int edgeNumPoints;             // Number of points in the edge
        float edgeLength;              // Length of the edge
        std::vector<Point> edgePoints; // Edge points
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Edge(long unsigned int n1, std::vector<Point> p);
        // Destructor
        ~Edge();
        // Getters
        long unsigned int getEdgeID();
        long unsigned int getEdgeNumPoints();
        float getEdgeLength();
        std::vector<Point> getEdgePoints();
        // Setters
        // Printers
        void printEdge();
        // Other methods
        float computeEdgeLength();
};

#endif