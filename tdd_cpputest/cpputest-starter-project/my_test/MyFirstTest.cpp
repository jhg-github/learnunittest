#include "CppUTest/TestHarness.h"

extern "C"
{
	/*
	 * Add your c-only include files here
	 */
    #include "module1.h"
}

TEST_GROUP(MyFirstTestGroup)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(MyFirstTestGroup, test1)
{
    LONGS_EQUAL(2, module1_func1());
}

