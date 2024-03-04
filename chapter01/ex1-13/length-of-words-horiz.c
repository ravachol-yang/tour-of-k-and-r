/*
  Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>

/* the max number of words from input */
#define MAX_WORDS 30

main ()
{
  int c, i, j; /* input and counter */
  int lword[MAX_WORDS]; /* length of word */

  for (i = 0; i <= MAX_WORDS; ++i)
    lword[i] = 0;

  i = 0;
  while ((c = getchar()) != EOF && i < MAX_WORDS) {
    if (c == ' ' || c == '\t' || c == '\n')
      ++i;
    else
      ++lword[i];
  }

  for (i = 0; i <= MAX_WORDS; ++i) {
    if (lword[i] == 0)
      ;
    else {
      printf("The #%d Word:\t", i+1);
      for (j = 0; j < lword[i]; ++j)
	printf("#");
      printf("/%d\n", lword[i]);
    }
  }
}
