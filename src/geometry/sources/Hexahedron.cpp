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

Hexahedron::Hexahedron(int n1, std::vector<Point> p)
{
    elemID = n1;
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
    std::vector<Point> aux;
    aux[0] = p[0];
    aux[1] = p[1];
    hexEdges[0] = Edge(0, 2, aux);
    aux[0] = p[1];
    aux[1] = p[2];
    hexEdges[1] = Edge(0, 2, aux);
    aux[0] = p[2];
    aux[1] = p[3];
    hexEdges[2] = Edge(0, 2, aux);
    aux[0] = p[3];
    aux[1] = p[0];
    hexEdges[3] = Edge(0, 2, aux);
    aux[0] = p[4];
    aux[1] = p[5];
    hexEdges[4] = Edge(0, 2, aux);
    aux[0] = p[5];
    aux[1] = p[6];
    hexEdges[5] = Edge(0, 2, aux);
    aux[0] = p[6];
    aux[1] = p[7];
    hexEdges[6] = Edge(0, 2, aux);
    aux[0] = p[7];
    aux[1] = p[4];
    hexEdges[7] = Edge(0, 2, aux);
    aux[0] = p[0];
    aux[1] = p[4];
    hexEdges[8] = Edge(0, 2, aux);
    aux[0] = p[1];
    aux[1] = p[5];
    hexEdges[9] = Edge(0, 2, aux);
    aux[0] = p[2];
    aux[1] = p[6];
    hexEdges[10] = Edge(0, 2, aux);
    aux[0] = p[3];
    aux[1] = p[7];
    hexEdges[11] = Edge(0, 2, aux);
}

void Hexahedron::buildHexaFaces(std::vector<Point> p)
{
}