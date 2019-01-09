
#include "coordinate.h"


Coordinate::Coordinate(std::vector<int> values) :
    values(values)
{
    if (values.size() == 0) throw "TODO";
}

int Coordinate::dimension() const { return values.size(); }

int Coordinate::valueAt(int i) const { return values.at(i); }

bool Coordinate::operator==(Coordinate &other) const
{
    if (dimension() != other.dimension()) throw "TODO";

    for (int i = 0; i < dimension(); ++i)
    {
        if (valueAt(i) != other.valueAt(i)) return false;
    }

    return true;
}