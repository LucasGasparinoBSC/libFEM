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
 * Point::Point(long unsigned int n1, long unsigned int n2, long unsigned int n3)
 *
 * @brief Construct a new point object.
 *
 * @details The Point constructor takes an integer argument and initializes the pointID to the argument value,
 * and initializes the x, y, and z coordinates to 0.0
 *
 * @param n The point ID
 */
Point::Point(long unsigned int n)
{
    pointID = n;             // Set thhe point ID
    pointXYZ.push_back(0.0); // Init x to 0
    pointXYZ.push_back(0.0); // Init y to 0
    pointXYZ.push_back(0.0); // Init z to 0
}

// Destructor
/**
 * Face::~Face()
 *
 * @brief Destroy the point object
 *
 * @details The Point destructor does nothing.
 */
Point::~Point()
{
}

// Getters

/**
 * Face::getPointID()
 *
 * @brief Get point ID attribute.
 *
 * @details The getPointID method returns the point ID.
 *
 * @return The point ID.
 */
long unsigned int Point::getPointID()
{
    return pointID;
}

/**
 *
 * Point::getPointXYZ()
 *
 * @brief Get point XYZ attribute.
 *
 * @details The getPointXYZ method returns the point XYZ coordinates.
 *
 * @return The point XYZ coordinates.
 */
std::vector<float> Point::getPointXYZ()
{
    return pointXYZ;
}

// Setters

/**
 * Point::setPointXYZ(float x, float y, float z)
 *
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
    pointXYZ[0] = x;
    pointXYZ[1] = y;
    pointXYZ[2] = z;
}

// Printers
/**
 * @brief Print the point object.
 *
 * @details The printPoint method prints the point attributes.
 */
void Point::printPoint()
{
    std::cout << "Point := " << pointID << ": " << pointXYZ[0] << ", " << pointXYZ[1] << ", " << pointXYZ[2] << std::endl;
}

// Other methods