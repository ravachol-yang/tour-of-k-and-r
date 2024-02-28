/*
  Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/ 
#include <stdio.h>
main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  
  celsius = lower;
  
  printf("CELS\tFAHR\n");

  while (celsius <= upper) {
    fahr = celsius / (5.0/9.0) + 32.0;
    printf("%6.0f\t%3.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
