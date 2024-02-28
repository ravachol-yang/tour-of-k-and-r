/*
  Exercise 1-12. Write a program that prints its input one word per line.
 */ 
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main ()
{
  int c; /* input */
  int state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' '||c == '\t'||c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      putchar('\n');
    }
    if (state == IN)
      putchar(c);
  }
} 
