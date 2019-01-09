#ifndef coordinate_h
#define coordinate_h


#include <vector>

class Coordinate
{
    std::vector<int> values;

    public:
    Coordinate(std::vector<int>);

    int dimension() const;
    int valueAt(int) const;

    bool operator==(Coordinate &) const;
}


#endif
