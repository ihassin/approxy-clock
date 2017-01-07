#include "unity.h"
#include "unity_fixture.h"

#ifndef __MAIN_H__
#include "main.h"
#endif

TEST_GROUP(ProductionCode);

TEST_SETUP(ProductionCode)
{
}

TEST_TEAR_DOWN(ProductionCode)
{
}

TEST(ProductionCode, SaysALittleAfter)
{
    ClockBlock *clockBlock = clock_init();

    TEST_ASSERT(clock_say_minutes(4) == CLOCK_A_LITTLE_PAST);
}
