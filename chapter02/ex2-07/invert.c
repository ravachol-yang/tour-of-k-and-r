/*
  Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
  position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
 */
#include <stdio.h>

unsigned invert(unsigned x,int p, int n);

int main()
{
  unsigned x = 75; /* 1001011 */
  int p = 3;
  int n = 3;

  /* should be 1000101 */
  unsigned out = invert(x, p, n);

  printf("%d\n", out);
  
  return 0;
}

unsigned invert(unsigned x, int p, int n)
{
  int offset = p + 1 - n;
  int changed = (x >> offset) & ~(~0 << n);
  
  unsigned out = x - (changed << offset) + (((~changed) & ~(~0 << n)) << offset);

  return out;
}
