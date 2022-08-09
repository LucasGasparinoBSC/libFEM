#include <iostream>
#include <vector>

#include "Point.h"
#include "Edge.h"
#include "Face.h"
#include "Hexahedron.h"

int main()
{
    int hexID = 1;
    std::vector<Point> p;
    for (int i = 0; i < 27; i++)
    {
        p.push_back(Point(i));
    }

    Hexahedron h(hexID, 2, p);
    h.buildHexaEdges(p);

    return 0;
}
