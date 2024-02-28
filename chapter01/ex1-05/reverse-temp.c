/*
  Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
  that is, from 300 degrees to 0.
 */ 
#include <stdio.h>
main ()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* the lower bound of fahr temp*/
  upper = 300; /* the upper bound of fahr temp */
  step = 20; /* increasement step */

  printf("FAHR\tCELS\n"); /* add header */
  
  for(fahr = upper; fahr >= lower; fahr = fahr -step) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%6.0f\t%3.1f\n", fahr, celsius);
  }
}
