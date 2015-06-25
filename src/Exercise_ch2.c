#include "Exercise_ch2.h"

/*
* Exercise 2.27
* Determine wether arguments can be added without overflow
*/

int uadd_ok(unsigned x, unsigned y)
{
    unsigned s = x + y;
    return s > x;
}
