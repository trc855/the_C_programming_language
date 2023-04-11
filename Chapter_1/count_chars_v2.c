#include <stdio.h>

/* count characters in input, version 2 */
/* test using `echo -n "Some phrase"`, cat, etc... */
main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;

  printf("%.0f\n", nc);
}
