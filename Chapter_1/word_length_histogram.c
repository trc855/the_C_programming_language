#include <stdio.h>

#define MAX 10 // maximum word length supported

/* exercise 1.13 - print histogram of length of words in input */
main()
{
  int c, i, length, j;
  int ndigit[MAX];

  length = 0;
  for(i = 0; i < MAX; ++i)
    ndigit[i] = 0;

  while((c = getchar()) != EOF)
    if (c == ' ' || c == '\n' || c == '\t'){
      ++ndigit[length];
      length = 0;
    } else
      ++length;

  printf("Length\tFrequency\n");
  for (i = 0; i < MAX; ++i){
    printf("%d | ", i);
    for(j = 1; j <= ndigit[i]; ++j)
      putchar('*');
    putchar('\n');
  }
}
