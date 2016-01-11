
#include <stdio.h>

int main()
{
   /* Print Fahrenheit-Celsius table in reverse order. */

   int step, lower, upper, fahr;
   float cel;
   
   step  =  20; /* increment */
   lower =   0; /* lower limit at end */
   upper = 300; /* upper limit at beginning */

   printf("Fahrenheit  Celsius\n"); /* Print heading. */
   for (fahr = upper; fahr >= lower; fahr = fahr - step) {
      cel = (5.0/9.0) * (fahr - 32);
      printf("       %3d   %6.1f\n", fahr, cel);
   }

   return 0;
}

