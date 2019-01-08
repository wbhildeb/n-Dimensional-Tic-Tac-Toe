
#ifdef TEST
#define CATCH_CONFIG_MAIN
#else
#define CATCH_CONFIG_RUNNER
#endif

#include "catch.h"
#include "../proj/state.h"


TEST_CASE("State X only equals X", "[class-test]")
{
    REQUIRE( State::X.equals(State::X) == true );
    REQUIRE( State::X.equals(State::O) == false );
    REQUIRE( State::X.equals(State::Empty) == false );
}

TEST_CASE("State O only equals O", "[class-test]")
{
    REQUIRE( State::O.equals(State::X) == false );
    REQUIRE( State::O.equals(State::O) == true );
    REQUIRE( State::O.equals(State::Empty) == false );
}

TEST_CASE("State Empty only equals Empty", "[class-test]")
{
    REQUIRE( State::Empty.equals(State::X) == false );
    REQUIRE( State::Empty.equals(State::O) == false );
    REQUIRE( State::Empty.equals(State::Empty) == true );
}
