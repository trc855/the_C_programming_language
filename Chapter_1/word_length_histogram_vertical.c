#include <stdio.h>

#define MAX 10 // maximum word length supported

/* exercise 1.13 - print vertical histogram of length of words in input */
main()
{
  int c, i, j, length, height;
  int ndigit[MAX];

  // zero out array
  length = 0;
  for(i = 0; i < MAX; ++i)
    ndigit[i] = 0;

  // load frequencies into array; array[length] = frequency
  while((c = getchar()) != EOF)
    if (c == ' ' || c == '\n' || c == '\t'){
      ++ndigit[length];
      length = 0;
    } else
      ++length;

  // determine height of histogram
  for (height = i = 0; i < MAX; ++i)
    if (height < ndigit[i])
      height = ndigit[i];

  // print histogram
  printf("Word length by frequency\n\n");
  for (i = 1; i <= height; ++i){
    printf("%d|", height - i + 1);
    for(j = 1; j < MAX; ++j)
      if (ndigit[j] > (height - i))
        putchar('#');
      else
        putchar(' ');
    putchar('\n');
  }
  printf("0|");
  for(i = 1; i < MAX; ++i)
    printf("%d", i);
  putchar('\n');
}
