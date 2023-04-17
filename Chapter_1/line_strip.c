#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void strip(char line[], int length);

/* Exercise 1-18 : remove trailing blanks and tabs from lines, delete blank lines entirely */
main()
{
  int len;
  char line[MAXLINE];

  while ((len = my_getline(line, MAXLINE)) > 0){
    strip(line, len);

    if (line[0] != '\0')
      printf("%s\n", line);
  }
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

/* strip trailing tabs and blanks from char array */
void strip(char line[], int length)
{
  int i;

  for(i = length - 1; i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'); --i)
    line[i] = '\0';
}
