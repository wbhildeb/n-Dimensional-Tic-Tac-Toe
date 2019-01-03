using System;

namespace TicTacToe
{
    public class State
    {
        public static State
            X = new State(true, false),
            O = new State(false, true),
            Empty = new State(false, false);

        public bool Is(State other)
        {
            return isX == other.isX && isO == other.isO;
        }

        private bool isX, isO;

        private State(bool isX, bool isO)
        {
            if (isX && isO)
            {
                throw new ArgumentException("A state cannot be both X and Y");
            }

            this.isX = isX;
            this.isO = isO;
        }
    }
}