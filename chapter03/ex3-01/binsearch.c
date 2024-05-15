/*
  Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at
  the price of more tests outside.) Write a version with only one test inside the loop and
  measure the difference in run-time.
 */
#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
  int x = 4;
  int v[] = {0,1,2,3,4,5};
  int n = 6;

  int p = binsearch(x, v, n);

  printf("%d\n", p);
  
  return 0;
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;

  mid = (low + high) / 2;
  
  while(low <= high && x != v[mid]) {

    if (x < v[mid]) {
      high = mid - 1;
    }
    else if (x > v[mid]) {
      low = mid + 1;
    }
    mid = (low + high) / 2;
  }

  return mid;
}
