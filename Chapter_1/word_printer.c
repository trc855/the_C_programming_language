#include <stdio.h>

#define IN  1
#define OUT 0

/* Exercise 1.12 - print input one word per line */

main()
{
  int c, state;

  state = OUT;
  while((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
      if (state == IN)
        putchar('\n');
      state = OUT;
    }
    else {
      state = IN;
      putchar(c);
    }
  }
}
