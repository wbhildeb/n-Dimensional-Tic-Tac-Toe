
#include "board.h"


// public
Board::Board(int dimension, int size) :
    dimension{dimension}, size{size}
{
    if (dimension <= 0) throw "TODO";
    if (size <= 0) throw "TODO";

    int cellsToAdd = pow(size, dimension);

    while (cellsToAdd > 0)
    {
        cells.emplace_back(State::Empty);
        --cellsToAdd;
    }
}

int Board::getDimension() const { return dimension; }
int Board::getSize() const { return dimension; }
int Board::getNumCells() const { return cells.size(); }
State Board::getCellAt(int i) const { return cells.at(i); }

void Board::setCell(const State &state, int i)
{
    cells[i] = state;
}

void Board::setCell(const State &state, const Coordinate &coord)
{
    int index = 0;
    for (int i = 0; i < coord.dimension(); ++i)
    {
        if (coord.valueAt(i) >= size) throw "TODO";
        index += pow(dimension, i) * coord.valueAt(i);
    }

    setCell(state, index);
}

// protected


// private
int Board::pow(int baseVal, int exponent) const
{
    if (exponent < 0) throw "TODO";

    int power = 1;
    while (exponent > 0)
    {
        power *= baseVal;
        --exponent;
    }

    return power;
}