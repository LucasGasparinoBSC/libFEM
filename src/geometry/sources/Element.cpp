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
/**
 * @brief Construct a new element object.
 * @details The Element constructor takes four integer
 * arguments and initializes the element ID to the  first argument.
 * The second argument is the number of points in the element.
 * The third argument is the number of edges in the element.
 * The fourth argument is the number of faces in the element.
 * 
 * @param n1 Element ID
 * @param n2 Number of points in the element
 * @param n3 Number of edges in the element
 * @param n4 Number of faces in the element
 */
Element::Element(int n1, int n2, int n3, int n4)
{
    eID = n1;
    eNumPoints = n2;
    eNumEdges = n3;
    eNumFaces = n4;
}

Element::~Element()
{
}