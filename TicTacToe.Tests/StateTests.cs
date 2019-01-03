using Xunit;
using TicTacToe;

namespace TicTacToe.Tests
{
    public class StateTests
    {
        [Fact]
        public void StateXShouldOnlyEqualX()
        {
            bool resultX = State.X.Is(State.X);
            Assert.True(resultX, "State X should equal state X");

            bool resultO = State.X.Is(State.O);
            Assert.False(resultO, "State X should not equal state O");

            bool resultEmpty = State.X.Is(State.Empty);
            Assert.False(resultEmpty, "State X should not equal state Empty");
        }

        [Fact]
        public void StateOShouldOnlyEqualO()
        {
            bool resultX = State.O.Is(State.X);
            Assert.False(resultX, "State O should not equal state X");

            bool resultO = State.O.Is(State.O);
            Assert.True(resultO, "State O should equal state O");

            bool resultEmpty = State.O.Is(State.Empty);
            Assert.False(resultEmpty, "State O should not equal state Empty");
        }


        [Fact]
        public void StateEmptyShouldOnlyEqualEmpty()
        {
            bool resultX = State.Empty.Is(State.X);
            Assert.False(resultX, "State Empty should not equal state X");

            bool resultO = State.Empty.Is(State.O);
            Assert.False(resultO, "State Empty should not equal state O");

            bool resultEmpty = State.Empty.Is(State.Empty);
            Assert.True(resultEmpty, "State Empty should equal state Empty");
        }
    }
}