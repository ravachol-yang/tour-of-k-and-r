/*
  Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
 */ 
#include <stdio.h>
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
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%6.0f\t%3.1f\n",fahr,celsius);
    fahr = fahr + step;
  }
}
