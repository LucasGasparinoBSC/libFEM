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
 * Face::Face(long unsigned int n1, std::vector<Point> p, std::vector<Edge> e)
 *
 * @brief Construct a new face object.
 *
 * @details The Face constructor takes one integer for the face ID,
 * a vector of points for the face points, and a vector of edges for the face edges.
 *
 * @param n1 the face ID
 * @param p vector of points that make up the face
 * @param e vector of edges
 */
Face::Face(long unsigned int n1, std::vector<Point> p, std::vector<Edge> e)
{
    faceID = n1;
    facePoints = p;
    faceEdges = e;
    faceNumPoints = facePoints.size();
    faceNumEdges = faceEdges.size();
}

// Destructor
/**
 * Face::~Face()
 * 
 * @brief Destroy the face object.
 *
 * @details The Face destructor does nothing.
 */
Face::~Face()
{
}

// Getters

/**
 * Face::getFaceID()
 *
 * @brief Get face ID attribute.
 *
 * @details The getFaceID method returns the face ID.
 *
 * @return The faceID of the face object.
 */
long unsigned int Face::getFaceID()
{
    return faceID;
}

/**
 * Face::getFaceNumPoints()
 *
 * @brief Get face number of points attribute.
 *
 * @details The getFaceNumPoints method returns the number of points in the face.
 *
 * @return The number of points in the face.
 */
long unsigned int Face::getFaceNumPoints()
{
    return faceNumPoints;
}

/**
 * Face::getFaceNumEdges()
 *
 * @brief Get face number of edges attribute.
 *
 * @details The getFaceNumEdges method returns the number of edges in the face.
 *
 * @return The number of edges in the face.
 */
long unsigned int Face::getFaceNumEdges()
{
    return faceNumEdges;
}

/**
 * Face::getFacePoints()
 *
 * @brief Get face points attribute.
 *
 * @details The getFacePoints method returns the face points.
 *
 * @return The face points.
 */
std::vector<Point> Face::getFacePoints()
{
    return facePoints;
}

/**
 * Face::getFaceEdges()
 *
 * @brief Get face edges attribute.
 *
 * @details The getFaceEdges method returns the face edges.
 *
 * @return The face edges.
 */
std::vector<Edge> Face::getFaceEdges()
{
    return faceEdges;
}

// Setters

// Printers
/**
 * Face::printFace()
 *
 * @brief Print the face object.
 *
 * @details The printFace method prints the face object.
 */
void Face::printFace()
{
    std::cout << "Face ID: " << faceID << std::endl;
    std::cout << "  -Number of points: " << faceNumPoints << std::endl;
    std::cout << "  -Number of edges: " << faceNumEdges << std::endl;
    std::cout << "  -Points: " << std::endl;
    for (long unsigned int i = 0; i < faceNumPoints; i++)
    {
        facePoints[i].printPoint();
    }
    std::cout << std::endl;
    std::cout << "  -Edges: " << std::endl;
    for (long unsigned int i = 0; i < faceNumEdges; i++)
    {
        faceEdges[i].printEdge();
    }
    std::cout << std::endl;
}