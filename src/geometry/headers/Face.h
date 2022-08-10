/**
 * @file Face.h
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines a face object type.
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 */

// Header guard
#ifndef FACE_H
#define FACE_H

// STL libraries
#include <iostream>
#include <cmath>
#include <vector>

// Classes to include
#include "Point.h"
#include "Edge.h"

class Face
{
    private:
        // Data
        long unsigned int faceID;        // Face ID
        long unsigned int faceNumPoints; // Number of points in the face
        long unsigned int faceNumEdges;  // Number of edges in the face
        std::vector<Point> facePoints;   // Face points
        std::vector<Edge> faceEdges;     // Face edges
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Face(long unsigned int n1, std::vector<Point> p, std::vector<Edge> e);
        // Destructor
        ~Face();
        // Getters
        long unsigned int getFaceID();
        long unsigned int getFaceNumPoints();
        long unsigned int getFaceNumEdges();
        std::vector<Point> getFacePoints();
        std::vector<Edge> getFaceEdges();
        // Setters
        // Printers
        void printFace();
        // Other methods
};

#endif