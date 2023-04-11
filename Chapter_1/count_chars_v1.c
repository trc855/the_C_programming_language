#include <stdio.h>

/* count characters in input, version 1 */
/* test using `echo -n "Some phrase"`, cat, etc... */
main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF){
    ++nc;
  }

  printf("%ld\n", nc);
}
