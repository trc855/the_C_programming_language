#include <stdio.h>

#define LIMIT 94 // 32,...,126 printable ASCII characters

/* exercise 1.14 - print histogram of different characters in input */
main()
{
  int c, i, length, j;
  int ndigit[LIMIT];

  length = 0;
  for(i = 0; i < LIMIT; ++i)
    ndigit[i] = 0;

  while((c = getchar()) != EOF)
    ++ndigit[c - 33];

  printf("Char\tFrequency\n");
  for (i = 0; i < LIMIT; ++i){
    putchar(i + 33);
    printf(" | ");
    for(j = 1; j <= ndigit[i]; ++j)
      putchar('*');
    putchar('\n');
  }
}
