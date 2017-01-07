#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(CanaryCode);

TEST_SETUP(CanaryCode)
{
}

TEST_TEAR_DOWN(CanaryCode)
{
}

TEST(CanaryCode, CanaryTest)
{
    TEST_ASSERT(0 == 0);
}
