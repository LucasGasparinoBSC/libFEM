/**
 * @file Element.cpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines the methods of the Element class.
 * @version 0.1
 * @date 2022-08-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Element.h"

// Constructor
Element::Element()
{
}

Element::~Element()
{
}

// Getters

/**
 * @brief Get element ID attribute.
 *
 * @details The getElementID method returns the element ID.
 *
 * @return The elementID of the element object.
 */
int Element::getElemID()
{
    return elemID;
}

/**
 * @brief Get element number of points attribute.
 *
 * @details The getElemNumPoints method returns the number of points in the element.
 *
 * @return The elemNumPoints of the element object.
 */
int Element::getElemNumPoints()
{
    return elemNumPoints;
}

/**
 * @brief Get element number of edges attribute.
 *
 * @details The getElemNumEdges method returns the number of edges in the element.
 *
 * @return The elemNumEdges of the element object.
 */
int Element::getElemNumEdges()
{
    return elemNumEdges;
}

/**
 * @brief Get element number of faces attribute.
 *
 * @details The getElemNumFaces method returns the number of faces in the element.
 *
 * @return The elemNumFaces of the element object.
 */
int Element::getElemNumFaces()
{
    return elemNumFaces;
}

/**
 * @brief Get element order attribute.
 *
 * @details The getElemOrder method returns the order of the element.
 *
 * @return The elemOrder of the element object.
 */
int Element::getElemOrder()
{
    return elemOrder;
}

/**
 * @brief Get element points attribute.
 *
 * @details The getElemPoints method returns the points of the element.
 *
 * @return The elemPoints of the element object.
 */
std::vector<Point> Element::getElemPoints()
{
    return elemPoints;
}

/**
 * @brief Get element edges attribute.
 *
 * @details The getElemEdges method returns the edges of the element.
 *
 * @return The elemEdges of the element object.
 */
std::vector<Edge> Element::getElemEdges()
{
    return elemEdges;
}

/**
 * @brief Get element faces attribute.
 *
 * @details The getElemFaces method returns the faces of the element.
 *
 * @return The elemFaces of the element object.
 */
std::vector<Face> Element::getElemFaces()
{
    return elemFaces;
}

// Setters

// Printers
void Element::printElement()
{
    std::cout << "Face ID: " << elemID << std::endl;
    std::cout << "  -Number of points: " << elemNumPoints << std::endl;
    std::cout << "  -Number of edges: " << elemNumEdges << std::endl;
    std::cout << "  -Points: " << std::endl;
    for (int i = 0; i < elemNumPoints; i++)
    {
        elemPoints[i].printPoint();
    }
    std::cout << std::endl;
    std::cout << "  -Edges: " << std::endl;
    for (int i = 0; i < elemNumEdges; i++)
    {
        elemEdges[i].printEdge();
    }
    std::cout << std::endl;
    std::cout << "  -Faces: " << std::endl;
    for (int i = 0; i < elemNumFaces; i++)
    {
        elemFaces[i].printFace();
    }
}