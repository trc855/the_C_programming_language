#include <stdio.h>

/* print Fahrenheit-Celcius table
   for celsius = 0, 5, ..., 100; floating point version  */

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 5;

  celsius = lower;

  printf("--------------------\n");
  printf(" C\t  F\n");
  printf("--------------------\n");

  while (celsius <= upper) {
    fahr = (celsius * (9.0 / 5.0)) + 32.0 ;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
