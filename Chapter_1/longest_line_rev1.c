#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* exercise 1.16 - print max line length and max line up to MAXLINE characters */
main()
{
  int len;
  int max;
  int c;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = my_getline(line, MAXLINE)) > 0){
    if (longest[max] != '\0')
      while ((c = getchar()) != EOF && c != '\n')
        ++len;
    if (len > max){
      max = len;
      copy(longest, line);
    }
  }
  printf("%d %s", max, longest);
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
