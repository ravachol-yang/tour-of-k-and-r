/*
  Exercise 2-2.
  Write a loop equivalent to the for loop above without using && or ||.
 */

#include <stdio.h>
#define LENGTH_LIM 1000

int main()
{
  int i;
  char s[LENGTH_LIM];
  char c;

  /*
  for (i=0; i < LENGTH_LIM-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
    s[i] = c;
    printf("%c", s[i]);
  }
  */
  i = 0;
  while (i < LENGTH_LIM - 1) {
    if ((c = getchar()) != EOF) {
      if (c != '\n') {
	s[i] = c;
	printf("%c", s[i]);
	++i;
      } else break;
    } else break;
  }
  
  return 0;
}
