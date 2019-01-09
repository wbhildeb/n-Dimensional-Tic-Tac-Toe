
#include "state.h"

// public

const State
    State::X{true, false},
    State::O{false, true},
    State::Empty{false, false};

State::State()
{
    *this = State(false, false);
}

bool State::operator==(const State &other) const
{
    return isX == other.isX && isO == other.isO;
}

// protected

// private

State::State(bool isX, bool isO) :
    isX{isX},
    isO{isO}
{
    if (isX && isO)
    {
        throw "A state cannot be both X and Y";
    }
}
