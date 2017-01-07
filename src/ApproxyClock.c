#include <stddef.h>

#ifndef __APPROXYCLOCK_H__
#include "ApproxyClock.h"
#endif

#define CLOCK_A_LITTLE_PAST_THRESHOLD       5
#define CLOCK_A_LITTLE_BEFORE_THRESHOLD     56

ClockBlock *clock_init()
{
    return(NULL);
}

ClockApproximation clock_say_minutes(int minutes)
{
    if(minutes <= CLOCK_A_LITTLE_PAST_THRESHOLD)
    {
        return ClockApproximation::A_LITTLE_PAST;
    }

    if(minutes >= CLOCK_A_LITTLE_BEFORE_THRESHOLD)
    {
        return ClockApproximation::A_LITTLE_BEFORE;
    }
}
