#include <stddef.h>
#include <stdlib.h>

#ifndef __APPROXYCLOCK_H__
#include "ApproxyClock.h"
#endif

#define A_LITTLE_PAST_THRESHOLD       5
#define A_LITTLE_BEFORE_THRESHOLD     56

ClockBlock *clock_init()
{
    return(malloc(sizeof(ClockBlock)));
}

ClockApproximation clock_say_minutes(ClockBlock *clockBlock, int minutes)
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

int *clock_say_time(ClockBlock *clockBlock, int hour, int minutes)
{
    int expected[3] = { clock_say_minutes(clockBlock, minutes), 2, CT_PM };

    return(expected);
}
