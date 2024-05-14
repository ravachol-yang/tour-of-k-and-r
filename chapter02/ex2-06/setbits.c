/*
  Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
  position p set to the rightmost n bits of y, leaving the other bits unchanged.
 */
#include <stdio.h>

unsigned setbits (unsigned x, int p, int n, unsigned y);

int main()
{
  int x = 75; /* 1001011 */
  int y = 87; /* 1010111 */

  int p = 3;
  int n = 2;

  /* should be 1011011 */
  int out = setbits(x, p, n, y);

  printf("%d\n", out);
  
  return 0;
}

unsigned setbits (unsigned x, int p ,int n, unsigned y) {

  int x_changed = (x >> (p+1-n)) & ~(~0 << n);
  int y_changed = (y >> (p+1-n)) & ~(~0 << n);
  
  int out = y - (y_changed << (p+1-n)) + (x_changed << (p+1-n));

  return out;
}
