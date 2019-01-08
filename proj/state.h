#ifndef state_h
#define state_h


class State
{
    bool isX, isO;

    public:
    const static State X, O, Empty;

    State();
    bool equals(const State &other) const;

    private:
    State(bool isX, bool isO);
};

#endif
