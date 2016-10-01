#ifndef __TIMING_H__
#define __TIMING_H__

#include <time.h>

// High precision Wall Clock
class Stopwatch {
private:
    struct timespec start;

public:
    Stopwatch() {
        clock_gettime(CLOCK_MONOTONIC, &start);
    }
    //return time in millisecs
    double elapsedTime() {
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        return (now.tv_sec - start.tv_sec) * 1000.0 + (now.tv_nsec - start.tv_nsec)/1000000.0;
    }
};

#endif
