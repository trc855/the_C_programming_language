#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void reverse(char s[], int reverse);

/* Exercise 1-19 : reverse each line of a file */
main()
{
  int len;
  char line[MAXLINE];

  while ((len = my_getline(line, MAXLINE)) > 0){
    reverse(line, len);
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

/* reverse an array of characters (in place) */
void reverse(char line[], int length)
{
	int pivot;
  if((length % 2) == 0)
    pivot = length / 2;
  else
    pivot = (length / 2) + 1;

  int i, j, c;
  for (i = 0; i < pivot; ++i){
    j = length - 1 - i;
    c = line[i];
    line[i] = line[j];
    line[j] = c;
  }
}
