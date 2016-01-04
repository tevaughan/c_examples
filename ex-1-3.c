
#include <stdio.h>

/* program is to display a conversion table from Fahrenheit to Celsius */

int main()
{
   int fahr, celsius;
   int lower, upper, step;
   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
   printf("Fahrenheit\tCelsius\n");
   while (fahr <= upper) {
      celsius = 5 * (fahr - 32) / 9;
      printf("\t%3d%6d\n", fahr, celsius);
      fahr = fahr + step;
   }

   return 0;
}

