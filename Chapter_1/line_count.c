#include <stdio.h>

/* count lines in input */
main()
{
  int lines, c;

  lines = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++lines;
  printf("%d\n", lines);
}
