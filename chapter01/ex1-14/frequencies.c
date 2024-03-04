/*
  Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
  in its input.
 */
#include <stdio.h>

#define ALL_CHAR 93

main ()
{
  int c, i, j; /*input and counters */
  int nchar[ALL_CHAR]; /* number of each char */

  for (i = 0; i < ALL_CHAR; ++i)
    nchar[ALL_CHAR] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '!' && c <= '~')
      ++nchar[c - '!'];
  }

  for (i = 0; i < ALL_CHAR; ++i) {
    printf("Frequencies of Characters: \n");
    if (nchar[i] == 0)
      ;
    else {
      printf("%c:\t", i - '!');
      for (j = 0; j <= nchar[i]; ++j)
	printf("#");
      printf("/%d\n", nchar[i]);
    }
  }
}
