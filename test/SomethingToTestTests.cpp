#include "SomethingToTest.h"

#include <catch2/catch.hpp>

TEST_CASE("SomethingToTest")
{
    SECTION("Pass")
    {
        REQUIRE(SomethingToTest::Fibonacci(0) == 1);
        REQUIRE(SomethingToTest::Fibonacci(5) == 8);
    }
    // SECTION("Fail")
    // {
    //     REQUIRE(SomethingToTest::Fibonacci(6) == 8);
    // }
}
