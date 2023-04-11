#include <stdio.h>

#define LOWER   0       /* Lower limit of the table*/
#define UPPER   300     /* Upper limit */
#define STEP    20      /* Step size */

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 in reverse order */

main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d\t%6.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32.0)));
}
