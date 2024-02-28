/*
  Exercise 1-11. How would you test the word count program? What kinds of input are most
  likely to uncover bugs if there are any?
  - A file with all spaces
  - A huge file with no newlines
  ...
 */ 
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main ()
{
  int c; /* input */
  int nl, nw, nc; /* number of lines, words and chars */
  int state; /* whether in a word */

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' '|| c == '\t'|| c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("\nNumber of lines:\t\t%d\nNumber of words:\t\t%d\nNumber of chars:\t\t%d", nl, nw, nc);
}
