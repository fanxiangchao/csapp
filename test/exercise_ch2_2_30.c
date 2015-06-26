#include "../src/Exercise_ch2.h"
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
   int x,y;
   
   x = 1;
   y = 1;
   printf("overflow: %s [%d + %d = %d]\n", tadd_ok(x,y) ? "false" : "true", x , y, x + y);

   x = -1;
   y = -1;
   printf("overflow: %s [%d + %d = %d]\n", tadd_ok(x,y) ? "false" : "true", x , y, x + y);

   x = INT_MAX;
   y = 1;
   printf("overflow: %s [%d + %d = %d]\n", tadd_ok(x,y) ? "false" : "true", x , y, x + y);

   x = -1;
   y = INT_MIN;
   printf("overflow: %s [%d + %d = %d]\n", tadd_ok(x,y) ? "false" : "true", x , y, x + y);

}


