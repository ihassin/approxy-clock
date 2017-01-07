#ifndef __APPROXYCLOCK_H__
#define __APPROXYCLOCK_H__

typedef struct ClockBlock {
} ClockBlock;

typedef enum {
    CLOCK_A_LITTLE_PAST,
} ClockApproximation;


ClockBlock *clock_init();
ClockApproximation clock_say_minutes(int minutes);

#endif
