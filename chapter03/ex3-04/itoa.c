/*
  Exercise 3-4. In a two's complement number representation, our version of itoa does not
  handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why
  not. Modify it to print that value correctly, regardless of the machine on which it runs.
 */

#include <stdio.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main()
{
    return 0;
}

void itoa(int n, char s[])
{
    int i,sign;

    if ((sign = n) < 0) {
	n = -n;
    }

    i = 0;

    do {
	s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
	s[i++] = '-';

    s[i] = '\0';

    reverse(s);
}
