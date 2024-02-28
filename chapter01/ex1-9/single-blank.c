/*
  Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
  more blanks by a single blank.
*/ 
#include <stdio.h>

main ()
{
  int c; /* the input */
  int blank; /* whether these are blanks */

  blank = 0;
  
  while ((c = getchar()) != EOF) {
    if (c != ' ')
      blank = 0;
    if (!blank)
      putchar(c);
    if (c == ' ')
      blank = 1;
  }
}
