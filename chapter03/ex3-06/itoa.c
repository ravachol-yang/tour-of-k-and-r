/*
  Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third
  argument is a minimum field width; the converted number must be padded with blanks on the
  left if necessary to make it wide enough.
 */

#include <stdio.h>
#define MAX 1000

void itob (int n, char s[], int w);
void reverse (char s[], int len);

int main ()
{
    int n = 20000;
    char s[MAX];
    int b = 4;

    itob(n, s, b);

    printf(s);
    printf("\n");
    
    return 0;
}

void itob (int n, char s[], int w)
{
    int i,sign;
    i = 0;

    if ((sign = n) < 0)
	n = -n;

    do {
	s[i++] = n % 10 +'0';
    } while ((n /= 10) != 0);

    if (sign < 0)
	s[i++] = '-';

    while ((i) % w != 0) {
	s[i++] = '0';
    }

    s[i] = '\0';

    reverse(s, i+1);
}

/* reverse current line */
void reverse (char s[], int len)
{
  int i;
  char tmp;
  /* pass \0 and \n */
  len = len - 2;
  /* do the reverse */
  for (i = 0; i <= len / 2; ++i) {
    tmp = s[i];
    s[i] = s[len - i];
    s[len - i] = tmp;
  }
}
