#include <assert.h>

#include "unity.h"
#include "unity_fixture.h"

#include "main.h"

TEST_GROUP(ProductionCode);

TEST_SETUP(ProductionCode)
{
}

TEST_TEAR_DOWN(ProductionCode)
{
}

TEST(ProductionCode, ProdTest1)
{
    TEST_ASSERT(0 == 0);
}
