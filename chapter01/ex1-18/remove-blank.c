/*
  Exercise 1-18.
  Write a program to remove trailing blanks and tabs from each line of input,
  and to delete entirely blank lines.
 */ 

#include <stdio.h>
#define MAXLINE 1000

int getline (char s[], int lim);
void remove_blanks (char s[], int len);

main ()
{
  int len; /* length of current line */
  char line[MAXLINE]; /* current line */

  len = 0;

  /* if there is a line */
  while ((len = getline(line, MAXLINE)) > 0) {    
    /* remove trailing blanks and tabs */
    remove_blanks(line, len);

    /* if the line is not entirely empty */
    if (line[1] != '\0')
      printf("%s", line); /* print the result */
  }
  
  return 0;
}

/* get each line */
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

/* remove trailing blanks and tabs */
void remove_blanks (char s[], int len)
{
  /* pass \0 and \n */
  len = len - 2;

  /* pass blanks & tabs */
  while (s[len] == '\t' || s[len] == ' ') {
    --len;
  }

  /* add new tail */
  s[len+1] = '\n';
  s[len+2] = '\0';
}
