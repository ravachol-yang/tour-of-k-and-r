/*
  Exercise 2-1.
  Write a program to determine the ranges of char, short, int, and long
  variables, both signed and unsigned, by printing appropriate values from standard headers
  and by direct computation. Harder if you compute them: determine the ranges of the various
  floating-point types.
 */ 

#include <stdio.h>
#include <limits.h>

int main()
{
  printf("char bit: %d\n", CHAR_BIT);
  printf("char min: %d\n", CHAR_MIN);
  printf("char max: %d\n", CHAR_MAX);
  
  printf("int min: %d\n", INT_MIN);
  printf("int max: %d\n", INT_MAX);

  printf("long min: %ld\n", LONG_MIN);
  printf("long max: %ld\n", LONG_MAX);

  printf("short min: %d\n", SHRT_MIN);
  printf("short max: %d\n", SHRT_MAX);

  printf("unsigned char max: %u\n", UCHAR_MAX);
  printf("unsigned long max: %lu\n", ULONG_MAX);
  printf("unsigned int max: %u\n", UINT_MAX);
  printf("unsigned short max: %u\n", USHRT_MAX);
  
  return 0;
}
