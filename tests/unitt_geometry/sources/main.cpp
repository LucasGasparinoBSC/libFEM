#include <iostream>
#include <vector>

#include "Point.h"
#include "Edge.h"
#include "Face.h"
#include "Hexahedron.h"

int main()
{
    long unsigned int hexID = 1;
    std::vector<Point> p;
    for (long unsigned int i = 0; i < 27; i++)
    {
        p.push_back(Point(i));
    }

    Hexahedron h(hexID, 2, p);

    return 0;
}
