/*
  Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
  for conversion.
 */ 
#include <stdio.h>

float convert(float fahr);

main ()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* the lower bound of fahr temp*/
  upper = 300; /* the upper bound of fahr temp */
  step = 20; /* increasement step */

  fahr = lower;

  printf("FAHR\tCELS\n"); /* add header */
  
  while (fahr <= upper) {
    printf("%6.0f\t%3.1f\n",fahr,convert(fahr));
    fahr = fahr + step;
  }
  return 0;
}

float convert(float fahr)
{
  return (5.0/9.0) * (fahr -32.0);
}
