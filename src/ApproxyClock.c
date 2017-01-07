#include <stddef.h>

#ifndef __APPROXYCLOCK_H__
#include "ApproxyClock.h"
#endif

#define CLOCK_A_LITTLE_PAST_THRESHOLD   5

ClockBlock *clock_init()
{
    return(NULL);
}

ClockApproximation clock_say_minutes(int minutes)
{
    if(minutes <= CLOCK_A_LITTLE_PAST_THRESHOLD)
    {
        return CLOCK_A_LITTLE_PAST;
    }
}
