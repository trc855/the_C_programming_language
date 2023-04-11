#include <stdio.h>

/* Exercise 1.10 - replace each tab, backspace, backslash, with \t, \b, \\ repsectively */

main()
{
  int c;

  while((c = getchar()) != EOF){
    if (c == '\t') {
      putchar('\\');
      c = 't';
    } else if (c == '\b') {
      putchar('\\');
      c = 'b';
    } else if (c == '\\') {
      putchar('\\');
    }
    putchar(c);
  }
}
