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
  int longest; /* longest word length*/

  for (i = 0; i <= MAX_WORDS; ++i)
    lword[i] = 0;

  i = 0;
  while ((c = getchar()) != EOF && i < MAX_WORDS) {
    if (c == ' ' || c == '\t' || c == '\n')
      ++i;
    else
      ++lword[i];
  }

  /* find the longest word to get the height of histogram */
  longest = lword[0];
  for (i = 0; i < MAX_WORDS; ++i)
    if (lword[i] > longest)
      longest = lword[i];

  /* Draw the histogram */
  for (i = 0; i < MAX_WORDS; ++i)
    if (lword[i] != 0)
      printf("Word#%d\t", i+1);

  /* Body of the histogram */
  printf("\n");
  for (i = 1; i < longest; ++i) {
    for (j = 0; j < MAX_WORDS; ++j) {
      if (lword[j] >= i)
	printf("#\t");
      else
	printf(" \t");
    }
    printf("\n");
  }
}
