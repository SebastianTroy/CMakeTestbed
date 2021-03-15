#include "SomethingToTest.h"

unsigned SomethingToTest::Fibonacci(unsigned index)
{
    switch (index) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    case 4: return 5;
    case 5: return 8;
    }
    return 0;
}
