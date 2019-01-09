#ifndef board_h
#define board_h

#include <vector>
#include "state.h"
#include "coordinate.h"


class Board
{
    int dimension, size;
    std::vector<State> cells;

public:
    Board(int dimension = 2, int size = 3);

    int getDimension() const;
    int getSize() const;
    int getNumCells() const;
    State getCellAt(int) const;

    void setCell(const State &, int);
    void setCell(const State &, const Coordinate &);


private:
    int pow(int baseVal, int exponent) const;
}

#endif
