/*
  Exercise 1-16.
  Revise the main routine of the longest-line program so it will correctly print
  the length of arbitrary long input lines, and as much as possible of the text.
 */ 
#include <stdio.h>
#define MAXLINE 1000 /* max length of a line */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main ()
{
  int len;
  int max;
  char line[MAXLINE];
  char lonegest[MAXLINE];

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0) {
    printf("length: %d\n", len); /* print current length */
    /* if current line is longer than current longest */
    if (len > max) {
      max = len;
      copy(lonegest, line);
    }
  }

  if (max > 0) {
    printf("longest: %s", lonegest);
  }

  return 0;
}

int getline(char s[], int lim)
{
  int c,i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
