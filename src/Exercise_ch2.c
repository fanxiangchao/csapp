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

/*
* Exercise 2.30
* Determine whether arguments can be added without overflow
*/
int tadd_ok(int x, int y)
{
    int sum = x + y;
    int neg_over = x > 0 && y > 0 && sum < 0;
    int pos_over = x < 0 && y < 0 && sum > 0;
    return !neg_over && !pos_over;
}

/**
* Exercise 2.42
* return x/16 
*/
int div16(int x)
{
   unsigned t = (unsigned)x;
   return (x >> 4) + (t >> (sizeof(int) * 8 - 1)); 
}
