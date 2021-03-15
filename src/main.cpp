#include "SomethingToTest.h"

#include <nlohmann/json.hpp>
#include <fmt/core.h>

#include <iostream>

int main()
{
    nlohmann::json foo{
        {"bar", 42},
        {"hello", fmt::format("World! {}", 42)},
    };
    std::cout << foo.dump(2) << std::endl;
    return SomethingToTest::Fibonacci(0);
}
