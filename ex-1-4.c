
#include <stdio.h>

/* Print Celsius-to-Fahrenheit table. */

int main()
{
   float cel, fahr;
   int lower, upper, step;
   
   lower = -20; /* lower limit of table */
   upper = 150; /* upper limit of table */
   step  =  10; /* increment for degrees Celsius */

   printf("Celsius  Fahrenheit\n"); /* Print heading. */
   cel = lower;
   while (cel <= upper) {
      fahr = (9.0/5.0)*cel + 32.0;
      printf("    %3.0f      %6.1f\n", cel, fahr); /* Print line in table. */
      cel = cel + step; 
   }
   
   return 0;
}

