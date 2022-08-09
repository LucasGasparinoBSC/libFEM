/**
 * @file Hexahedron.cpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Defines the methods of the Hexahedron class.
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "Hexahedron.h"

Hexahedron::Hexahedron(int n1, int n2, std::vector<Point> p)
{
    elemID = n1;
    elemOrder = n2;
    elemNumEdges = 12;
    elemNumFaces = 6;
    elemPoint = p;
    elemNumPoints = elemPoint.size();
}

Hexahedron::~Hexahedron()
{
}

void Hexahedron::buildHexaEdges(std::vector<Point> p)
{
    // Initialize auxiliaries
    std::vector<Point> aux;
    long unsigned int c = 8;

    // Edge 0 = {0,1,c...}
    aux.push_back(p[0]);
    aux.push_back(p[1]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(0, aux));

    // Edge 1 = {1,2,c...}
    aux.push_back(p[1]);
    aux.push_back(p[2]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(1, aux));

    // Edge 2 = {2,3,c...}
    aux.push_back(p[2]);
    aux.push_back(p[3]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(2, aux));

    // Edge 3 = {3,0,c...}
    aux.push_back(p[3]);
    aux.push_back(p[0]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(3, aux));

    // Edge 4 = {4,5,c...}
    aux.push_back(p[4]);
    aux.push_back(p[5]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(4, aux));

    // Edge 5 = {5,6,c...}
    aux.push_back(p[5]);
    aux.push_back(p[6]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(5, aux));

    // Edge 6 = {6,7,c...}
    aux.push_back(p[6]);
    aux.push_back(p[7]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(6, aux));

    // Edge 7 = {7,4,c...}
    aux.push_back(p[7]);
    aux.push_back(p[4]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(7, aux));

    // Edge 8 = {0,4,c...}
    aux.push_back(p[0]);
    aux.push_back(p[4]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(8, aux));

    // Edge 9 = {1,5,c...}
    aux.push_back(p[1]);
    aux.push_back(p[5]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(9, aux));

    // Edge 10 = {2,6,c...}
    aux.push_back(p[2]);
    aux.push_back(p[6]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(10, aux));

    // Edge 11 = {3,7,c...}
    aux.push_back(p[3]);
    aux.push_back(p[7]);
    for (int i = 1; i < elemOrder; i++)
    {
        aux.push_back(p[c]);
        c++;
    }
    hexEdge.push_back(Edge(11, aux));

    for (long unsigned int i = 0; i < 12; i++)
    {
        hexEdge[i].setEdgeNumPoints(elemOrder);
    }
}

void Hexahedron::buildHexaFaces(std::vector<Point> p)
{
}