#include <stdio.h>

/* Exercise 1.9 - replace all sequential blanks with one blank */
main()
{
  int prev, c;

  while((c = getchar()) != EOF){
    if (prev == ' '){
      if (c != ' ')
        putchar(c);
    } else {
      putchar(c);
    }

    prev = c;
  }
}
