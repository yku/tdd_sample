#include "CppUTest/TestHarness.h"

extern "C" 
{
#include "calc.h"
}

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
    //FAIL("FAIL me!");
    CHECK_EQUAL(5, add(3, 2));
    CHECK_EQUAL(5, add(-3, 2));
}
