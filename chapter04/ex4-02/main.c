/*
  Exercise 4-2. Extend atof to handle scientific notation of the form
  123.45e-6
  where a floating-point number may be followed by e or E and an optionally signed exponent.
 */ 

#include <stdio.h>

int main ()
{
    double atof(char s[]);
    double out;

    char s[] = "123.45e-6";

    out = atof(s);

    printf("%g\n", out);
    
    return 0;
}
