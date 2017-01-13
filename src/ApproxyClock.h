#ifndef __APPROXYCLOCK_H__
#define __APPROXYCLOCK_H__

typedef struct ClockBlock {
} ClockBlock;

typedef enum {
    NO_CLUE,
    A_LITTLE_PAST,
    A_LITTLE_BEFORE,
} ClockApproximation;

typedef enum {
    CT_AM,
    CT_PM
} ClockTime;

ClockBlock *clock_init();
ClockApproximation clock_say_minutes(ClockBlock *clockBlock, int minutes);
int *clock_say_time(ClockBlock *clockBlock, int hour, int minutes);

#endif
