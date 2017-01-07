#include <stddef.h>

#ifndef __APPROXYCLOCK_H__
#include "ApproxyClock.h"
#endif

#define A_LITTLE_PAST_THRESHOLD       5
#define A_LITTLE_BEFORE_THRESHOLD     56

ClockBlock *clock_init()
{
    return(NULL);
}

ClockApproximation clock_say_minutes(int minutes)
{
    if(minutes <= A_LITTLE_PAST_THRESHOLD)
    {
        return A_LITTLE_PAST;
    }

    if(minutes >= A_LITTLE_BEFORE_THRESHOLD)
    {
        return A_LITTLE_BEFORE;
    }
    return(NO_CLUE);
}
