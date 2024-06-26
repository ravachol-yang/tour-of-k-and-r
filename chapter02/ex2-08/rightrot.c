/*
  Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated
  to the right by n positions.
 */
#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main ()
{
  unsigned x = 75; /* 1001011 */
  int n = 2;

  /* should be 1110010 */
  unsigned out = rightrot(x, n);

  printf("%d\n", out);
  
  return 0;
}

unsigned rightrot(unsigned x, int n)
{
  unsigned num = x;
  int move;

  for (move = 0; num != 0; num >>= 1) {
    move++;
  }
  move -= n;
  unsigned out = ((x & ~(~0 << n)) << move) | (x >> n);
  return out;
}
