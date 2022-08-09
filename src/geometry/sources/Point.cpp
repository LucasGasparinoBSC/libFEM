/**
 * @file Point.cpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines the methods of the Point class.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Point.h"

// Constructor
/**
 * @brief Creates a point object.
 * 
 * @details The Point constructor takes an integer argument and initializes the point ID to the integer
 * argument, and initializes the x, y, and z coordinates to 0.
 * 
 * @param n The point ID
 */
Point::Point(int n)
{
    pID = n;             // Set thhe point ID
    pXYZ.push_back(0.0); // Init x to 0
    pXYZ.push_back(0.0); // Init y to 0
    pXYZ.push_back(0.0); // Init z to 0
}

// Destructor
/**
 * @brief Destroy the point object
 * 
 * @details The Point destructor does nothing.
 */
Point::~Point()
{
    // Nothing to do here
}

// Getters

/**
 * @brief Get point ID attribute.
 * 
 * @details The getPointID method returns the point ID.
 * 
 * @return The point ID.
 */
int Point::getPointID()
{
    return pID;
}

/**
 * @brief Get point XYZ attribute.
 * 
 * @details The getPointXYZ method returns the point XYZ coordinates.
 * 
 * @return The point XYZ coordinates.
 */
std::vector<float> Point::getPointXYZ()
{
    return pXYZ;
}

// Setters

/**
 * @brief Set point XYZ attribute.
 * 
 * @details The setPointXYZ method sets the point XYZ coordinates.
 * 
 * @param x The x coordinate.
 * @param y The y coordinate.
 * @param z The z coordinate.
 */

void Point::setPointXYZ(float x, float y, float z)
{
    pXYZ[0] = x;
    pXYZ[1] = y;
    pXYZ[2] = z;
}