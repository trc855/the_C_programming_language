#include <stdio.h>

/* Copy input to output first version */
int main()
{
  int c; /* here we use int (as opposed to char) as it can be assigned any possible char as well as the EOF value */

  c = getchar();
  while(c != EOF){
    putchar(c);
    c = getchar();
  }
}
