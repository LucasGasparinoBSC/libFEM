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
Face::Face(int n1, int n2)
{
    fID = n1;
    fNumPoints = n2;
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