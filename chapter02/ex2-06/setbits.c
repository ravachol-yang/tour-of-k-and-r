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
  int n = 3;

  /* should be 1011011 */
  int out = setbits(x, p, n, y);

  printf("%d\n", out);
  
  return 0;
}

unsigned setbits (unsigned x, int p ,int n, unsigned y) {

  int mask = ~(~0 << n) << (p+1-n);
  
  unsigned out = (y & ~mask) | (x & mask); 

  return out;
}
