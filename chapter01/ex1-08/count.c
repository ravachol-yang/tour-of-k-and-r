/*
  Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */
#include <stdio.h>

main ()
{
  int c; /* the input */
  int blanks, tabs, newlines; /* count of blanks, tabs and newlines */

  blanks = 0;
  tabs = 0;
  newlines = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++newlines;
  }
  
  printf("Blanks:\t\t%d\nTabs:\t\t%d\nNewlines:\t%d", blanks, tabs, newlines);
}
