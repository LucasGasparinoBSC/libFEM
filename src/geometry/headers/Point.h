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

// Classes to include

class Point
{
    private:
        // Data
        int pID;                 // Point ID
        std::vector<float> pXYZ; // Point coordinates
        // Methods
    public:
        // Data
        // Methods
        // Constructor
        Point(int n);
        // Destructor
        ~Point();
        // Getters
        int getPointID();
        std::vector<float> getPointXYZ();
        // Setters
        void setPointXYZ(float x, float y, float z);
        // Other methods
};

#endif // !POINT_H