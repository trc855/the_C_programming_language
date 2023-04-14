#include <stdio.h>

int fahr_to_c(int fahr);

/* print Fahrenheit-Celcius table
   using function. Exercise 1.15  */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    printf("%3d\t%6d\n", fahr, fahr_to_c(fahr));
    fahr = fahr + step;
  }
}

/* convert fahrenheit to celsius */
int fahr_to_c(int fahr)
{
  return 5 * (fahr - 32) / 9;
}
