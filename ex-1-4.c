
/* Print Celsius to Fahrenheit table */

#include <stdio.h>
int main()
{
   int lower, upper, step;
   float cel, fahr;
   
   lower = 0; /* lower limit of table */
   upper = 300; /* upper limit of table */
   step = 20; /* increment for temperature */
   
   cel = lower;

   while (cel <= upper) {
      fahr = (9.0/5.0) * cel + 32;
      printf("Celsius\tFahrenheit\n\n"); /* prints heading */
      printf("%3.0f %6.0f\n", cel, fahr); /* prints table */
      cel = cel + step; 
   }
   
   return 0;
}

