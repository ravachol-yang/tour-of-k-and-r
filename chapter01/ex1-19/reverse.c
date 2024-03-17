/*
  Exercise 1-19.
  Write a function reverse(s) that reverses the character string s. Use it to
  write a program that reverses its input a line at a time.
 */ 

#include <stdio.h>
#define MAXLINE 1000

int getline (char s[], int lim);
void reverse (char s[], int len);

main ()
{
  int len; /* length of current line */
  char line[MAXLINE]; /* current input line */

  /* if there is a line */
  while ((len = getline(line, MAXLINE)) > 0) {
    /* reverse current line */
    reverse(line, len);
    printf("%s", line);
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

/* reverse current line */
void reverse (char s[], int len)
{
  int i;
  char tmp;
  /* pass \0 and \n */
  len = len - 2;
  /* do the reverse */
  for (i = 0; i <= len / 2; ++i) {
    tmp = s[i];
    s[i] = s[len - i];
    s[len - i] = tmp;
  }
}
