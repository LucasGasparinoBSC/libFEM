/**
 * @file Edge.cpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines the methods of the Edge class.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Edge.h"

// Constructor
/**
 * @brief Construct a new edge object.
 * @details The Edge constructor takes two integer
 * arguments and initializes the edge ID to the  first argument.
 * The second argument is the number of points in the edge.
 * 
 * @param n1 Edge ID
 * @param n2 Number of points in the edge
 * @param p Edge points
 */
Edge::Edge(int n1, std::vector<Point> p)
{
    edgeID = n1;
    edgePoint = p;
}

// Destructor
/**
 * @brief Destroy the edge object.
 * @details The Edge destructor does nothing.
 */
Edge::~Edge()
{

}

// Getters

/**
 * @brief Get edge ID attribute.
 * @details The getEdgeID method returns the edge ID.
 * 
 * @return The edge ID.
 */
int Edge::getEdgeID()
{
    return edgeID;
}

/**
 * @brief Get edge number of points attribute.
 * @details The getEdgeNumPoints method returns the number of points in the edge.
 * 
 * @return The number of points in the edge.
 */
int Edge::getEdgeNumPoints()
{
    return edgeNumPoints;
}

/**
 * @brief Get edge points attribute.
 * @details The getEdgePoint method returns the edge points.
 * 
 * @return The edge points.
 */
std::vector<Point> Edge::getEdgePoints()
{
    return edgePoint;
}

/**
 * @brief Get edge length attribute.
 * @details The getEdgeLength method returns the length of the edge.
 * 
 * @return The length of the edge.
 */

float Edge::getEdgeLength()
{
    return edgeLength;
}

// Setters
/**
 * @brief Set edge number of points attribute.
 * @details The setEdgeNumPoints method sets the number of points in the edge.
 * 
 * @param n The number of points in the edge.
 */
void Edge::setEdgeNumPoints(int n)
{
    edgeNumPoints = n;
}

// Other methods

/**
 * @brief Compute the length of the edge.
 * 
 * @details This function computes the length of an edge by taking the difference between the x, y, and z
 * coordinates of the two points that make up the edge ends, and then taking the square root of the sum of
 * the squares of the differences. Assumes that points 0 and 1 are the endpoints.
 */
void Edge::computeEdgeLength()
{
    std::vector<float> eBegin = edgePoint[0].getPointXYZ();
    std::vector<float> eEnd = edgePoint[1].getPointXYZ();
    edgeLength = sqrt(pow(eEnd[0] - eBegin[0], 2) + pow(eEnd[1] - eBegin[1], 2) + pow(eEnd[2] - eBegin[2], 2));
}