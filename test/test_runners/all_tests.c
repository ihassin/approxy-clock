#include "unity_fixture.h"

static void RunAllTests(void)
{
    RUN_TEST_GROUP(CanaryCode);
    RUN_TEST_GROUP(DriverCode);
    RUN_TEST_GROUP(ProductionCode);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
