/**
 * @file Face.cpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines the methods of the Face class.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Face.h"

// Constructor
/**
 * @brief Construct a new face object.
 * @details The Face constructor takes two integer
 * arguments and initializes the face ID to the  first argument.
 * The second argument is the number of points in the face.
 * 
 * @param n1 Face ID
 * @param n2 Number of points in the face
 */
Face::Face(int n1, std::vector<Point> p)
{
    faceID = n1;
    facePoints = p;
    faceNumPoints = facePoints.size();
}

// Destructor
/**
 * @brief Destroy the face object
 * 
 * @details The Face destructor does nothing.
 */
Face::~Face()
{

}

// Getters

/**
 * @brief Get face ID attribute.
 * @details The getFaceID method returns the face ID.
 * 
 * @return The face ID.
 */
int Face::getFaceID()
{
    return faceID;
}

/**
 * @brief Get face number of points attribute.
 * @details The getFaceNumPoints method returns the number of points in the face.
 * 
 * @return The number of points in the face.
 */
int Face::getFaceNumPoints()
{
    return faceNumPoints;
}