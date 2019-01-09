
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

void Board::setCell(State &state, int i)
{
    cells[i] = state;
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