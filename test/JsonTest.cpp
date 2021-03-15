#include <catch2/catch.hpp>
#include <nlohmann/json.hpp>

TEST_CASE("Json")
{
    SECTION("Foo")
    {
        nlohmann::json foo{
            {"bar", true},
        };
        REQUIRE(foo.at("bar").get<bool>());
    }
}
