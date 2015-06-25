#include <stdio.h>
#include "../src/Exercise_ch2.h"


int main(int argc, char *argv[])
{
   unsigned x = 1;
   unsigned y = 2;
   unsigned bx = (1 << ((sizeof(unsigned) * 8) - 1)) + 1;
   unsigned by = (1 << ((sizeof(unsigned) * 8) - 1)) + 2;

   printf("overflow: %s [%u + %u = %u]\n", uadd_ok(x,y) ? "true" : "false",x,y,(x + y));
   printf("overflow: %s [%u + %u = %u]\n", uadd_ok(bx,by) ? "true" : "false",bx,by,(bx + by));
  
}
