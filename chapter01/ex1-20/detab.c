/*
  Exercise 1-20.
  Write a program detab that replaces tabs in the input with the proper number
  of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
  Should n be a variable or a symbolic parameter?
 */ 

#include <stdio.h>
#define SPACE_PER_TAB 4
#define MAXLINE 1000

int getline (char s[], int lim);
void detab (char from[], char to[]);

main ()
{
  int len; /* length of current line */
  char line[MAXLINE]; /* current line */
  char detabbed[MAXLINE]; /* current line dettabed */

  /* if there is a line */
  while ((len = getline(line, MAXLINE)) > 0) {
    /* replace tabs */
    detab(line, detabbed);
    printf("%s", detabbed);
  }
  return 0;
}

/* get a line */
int getline (char s[], int lim)
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

/* TODO */
/* replace tabs with proper number of spaces */
void detab(char from[], char to[])
{
  int i, j, spaces;
  /* copying & replacing */
  for (i = 0, j = 0; from[i] != '\0'; ++i) {
    to[j] = from[i];
  }
}
