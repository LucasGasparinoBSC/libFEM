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
#include <vector>

// Classes to include
#include "Point.h"

class Face
{
    private:
        // Data
        int fID;                   // Face ID
        int fNumPoints;            // Number of points in the face
        std::vector<Point> fPoint; // Face points
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Face(int n1, int n2);
        // Destructor
        ~Face();
};

#endif