#include <stdio.h>
#include "../src/Exercise_ch2.h"


int main(int argc, char *argv[])
{
   int x = 12340;
   int y = - 12340;
   int rx = div16(x);
   int ry = div16(y);

   printf("div16(%d) = %d expect=771\n",x, rx);
   printf("div16(%d) = %d expect=-771\n",y, ry);
}
