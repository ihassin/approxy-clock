#include <string.h>
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

TEST(ProductionCode, ReturnsClockBlock)
{
    ClockBlock *block = clock_init();
    TEST_ASSERT(block != NULL);
}

TEST(ProductionCode, SaysALittleAfter)
{
    ClockBlock *clockBlock = clock_init();

    TEST_ASSERT(clock_say_minutes(clockBlock, 4) == A_LITTLE_PAST);
}

TEST(ProductionCode, SaysALittleBefore)
{
    ClockBlock *clockBlock = clock_init();

    TEST_ASSERT(clock_say_minutes(clockBlock, 56) == A_LITTLE_BEFORE);
}

TEST(ProductionCode, SaysTime)
{
    ClockBlock *clockBlock = clock_init();
    static int expected[] = { A_LITTLE_BEFORE, 2, CT_PM };
    int *computed = clock_say_time(clockBlock, 13, 56);

    TEST_ASSERT(memcmp(computed, expected, sizeof(int)) == 0);
}
