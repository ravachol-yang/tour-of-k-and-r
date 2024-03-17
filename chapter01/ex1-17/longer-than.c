/*
  Exercise 1-17.
  Write a program to print all input lines that are longer than 80 characters.
 */ 
#include <stdio.h>
#define LONGER_THAN 80
#define MAXLINE 1000

int getline (char line[], int lim);

main ()
{
  int len;
  char line[MAXLINE];

  len = 0;
  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > LONGER_THAN)
      printf("length %d:%s", len, line);
  }  
  return 0;
}

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
