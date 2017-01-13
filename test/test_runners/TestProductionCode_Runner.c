#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(ProductionCode)
{
    RUN_TEST_CASE(ProductionCode, SaysALittleAfter);
    RUN_TEST_CASE(ProductionCode, SaysALittleBefore);
    RUN_TEST_CASE(ProductionCode, ReturnsClockBlock);
    RUN_TEST_CASE(ProductionCode, SaysTime);
}
