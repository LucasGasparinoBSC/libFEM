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

#include "Hexahedron.h"

Hexahedron::Hexahedron(long unsigned int n1, long unsigned int n2, std::vector<Point> p)
{
    elemID = n1;
    elemOrder = n2;
    elemNumEdges = 12;
    elemNumFaces = 6;
    elemPoints = p;
    elemNumPoints = elemPoints.size();
    buildHexaEdges();
    buildHexaFaces();
}

Hexahedron::~Hexahedron()
{
}

void Hexahedron::buildHexaEdges()
{
    // Initialize auxiliaries
    std::vector<Point> aux;
    long unsigned int c = 8;

    // Edge 0 = {0,1,c...}
    aux.push_back(elemPoints[0]);
    aux.push_back(elemPoints[1]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(0, aux));

    // Edge 1 = {1,2,c...}
    aux.push_back(elemPoints[1]);
    aux.push_back(elemPoints[2]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(1, aux));

    // Edge 2 = {2,3,c...}
    aux.push_back(elemPoints[2]);
    aux.push_back(elemPoints[3]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(2, aux));

    // Edge 3 = {3,0,c...}
    aux.push_back(elemPoints[3]);
    aux.push_back(elemPoints[0]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(3, aux));

    // Edge 4 = {4,5,c...}
    aux.push_back(elemPoints[4]);
    aux.push_back(elemPoints[5]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(4, aux));

    // Edge 5 = {5,6,c...}
    aux.push_back(elemPoints[5]);
    aux.push_back(elemPoints[6]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(5, aux));

    // Edge 6 = {6,7,c...}
    aux.push_back(elemPoints[6]);
    aux.push_back(elemPoints[7]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(6, aux));

    // Edge 7 = {7,4,c...}
    aux.push_back(elemPoints[7]);
    aux.push_back(elemPoints[4]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(7, aux));

    // Edge 8 = {0,4,c...}
    aux.push_back(elemPoints[0]);
    aux.push_back(elemPoints[4]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(8, aux));

    // Edge 9 = {1,5,c...}
    aux.push_back(elemPoints[1]);
    aux.push_back(elemPoints[5]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(9, aux));

    // Edge 10 = {2,6,c...}
    aux.push_back(elemPoints[2]);
    aux.push_back(elemPoints[6]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(10, aux));

    // Edge 11 = {3,7,c...}
    aux.push_back(elemPoints[3]);
    aux.push_back(elemPoints[7]);
    for (long unsigned int i = 1; i < elemOrder; i++)
    {
        aux.push_back(elemPoints[c]);
        c++;
    }
    elemEdges.push_back(Edge(11, aux));
}

void Hexahedron::buildHexaFaces()
{
    // Auxiliary variables
    std::vector<Point> auxPoint;
    std::vector<Edge> auxEdge;

    // Face 1: P={0,3,2,1,c...}, E={0,1,2,3}
    auxEdge.push_back(elemEdges[0]);
    auxEdge.push_back(elemEdges[1]);
    auxEdge.push_back(elemEdges[2]);
    auxEdge.push_back(elemEdges[3]);

    // Face 2: P={4,5,6,7,c...}, E={4,5,6,7}
    auxEdge.push_back(elemEdges[4]);
    auxEdge.push_back(elemEdges[5]);
    auxEdge.push_back(elemEdges[6]);
    auxEdge.push_back(elemEdges[7]);

    // Face 3: P={0,3,7,4,c...}, E={8,3,11,7}
    auxEdge.push_back(elemEdges[8]);
    auxEdge.push_back(elemEdges[3]);
    auxEdge.push_back(elemEdges[11]);
    auxEdge.push_back(elemEdges[7]);

    // Face 4: P={5,6,2,1,c...}, E={9,1,10,5}
    auxEdge.push_back(elemEdges[9]);
    auxEdge.push_back(elemEdges[1]);
    auxEdge.push_back(elemEdges[10]);
    auxEdge.push_back(elemEdges[5]);

    // Face 5: P={3,7,6,2,c...}, E={2,10,6,11}
    auxEdge.push_back(elemEdges[2]);
    auxEdge.push_back(elemEdges[10]);
    auxEdge.push_back(elemEdges[6]);
    auxEdge.push_back(elemEdges[11]);

    // Face 6: P={0,1,5,4,c...}, E={0,9,4,8}
    auxEdge.push_back(elemEdges[0]);
    auxEdge.push_back(elemEdges[9]);
    auxEdge.push_back(elemEdges[4]);
    auxEdge.push_back(elemEdges[8]);
}