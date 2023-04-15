#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* execise 1-17 : print all input lines longer than 0 chars */
main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = my_getline(line, MAXLINE)) > 0)
    if (len > 80)
      printf("%d %s\n", len, line);
  return 0;
}

/* my_getline: read a line into s, return length */
int my_getline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy from[] into to[], assume to[] is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
