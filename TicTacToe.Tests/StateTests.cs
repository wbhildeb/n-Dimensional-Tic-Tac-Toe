using Xunit;
using TicTacToe;

namespace TicTacToe.Tests
{
    public class StateTests
    {
        [Fact]
        public void StateXShouldOnlyEqualX()
        {
            bool resultX = State.X.Equals(State.X);
            Assert.True(resultX, "State X should equal state X");

            bool resultO = State.X.Equals(State.O);
            Assert.False(resultO, "State X should not equal state O");

            bool resultEmpty = State.X.Equals(State.Empty);
            Assert.False(resultEmpty, "State X should not equal state Empty");
        }

        [Fact]
        public void StateOShouldOnlyEqualO()
        {
            bool resultX = State.O.Equals(State.X);
            Assert.False(resultX, "State O should not equal state X");

            bool resultO = State.O.Equals(State.O);
            Assert.True(resultO, "State O should equal state O");

            bool resultEmpty = State.O.Equals(State.Empty);
            Assert.False(resultEmpty, "State O should not equal state Empty");
        }


        [Fact]
        public void StateEmptyShouldOnlyEqualEmpty()
        {
            bool resultX = State.Empty.Equals(State.X);
            Assert.False(resultX, "State Empty should not equal state X");

            bool resultO = State.Empty.Equals(State.O);
            Assert.False(resultO, "State Empty should not equal state O");

            bool resultEmpty = State.Empty.Equals(State.Empty);
            Assert.True(resultEmpty, "State Empty should equal state Empty");
        }
    }
}