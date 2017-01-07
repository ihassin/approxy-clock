#ifndef __APPROXYCLOCK_H__
#define __APPROXYCLOCK_H__

typedef struct ClockBlock {
} ClockBlock;

typedef enum {
    A_LITTLE_PAST,
    A_LITTLE_BEFORE,
} ClockApproximation;

ClockBlock *clock_init();
ClockApproximation clock_say_minutes(int minutes);

#endif
