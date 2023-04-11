#include <stdio.h>

/* exercise 1.8 */
main()
{
  int b, t, n, c;

  b = t = n = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n'){
      ++n;
    } else if (c == '\t') {
      ++t;
    } else if (c == ' ') {
      ++b;
    }
  }
  printf("Number of new lines: %d\n", n);
  printf("Number of tabs: %d\n", t);
  printf("Number of blanks: %d\n", b);
}
