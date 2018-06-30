
#include <stdio.h>

/* Display a conversion table from Fahrenheit to Celsius.  This is like the one
 * in K&R but is modified to print a heading above the table.
 */

int main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower =   0; /* lower limit of temperature table */
   upper = 300; /* upper limit */
   step  =  20; /* step size   */

   fahr = lower;
   printf("Fahrenheit  Celsius\n");
   while (fahr <= upper) {
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      printf("       %3.0f   %6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }

   return 0;
}

