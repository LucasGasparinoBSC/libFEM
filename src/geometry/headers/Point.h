/**
 * @file Point.h
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines a point object type.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Header guard
#ifndef POINT_H
#define POINT_H

// STL libraries
#include <vector>
#include <iostream>

// Classes to include

class Point
{
    private:
        // Data
        long unsigned int pointID;                 // Point ID
        std::vector<float> pointXYZ; // Point coordinates
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Point(long unsigned int n);
        // Destructor
        ~Point();
        // Getters
        long unsigned int getPointID();
        std::vector<float> getPointXYZ();
        // Setters
        void setPointXYZ(float x, float y, float z);
        // Printers
        void printPoint();
        // Other methods
};

#endif // !POINT_H