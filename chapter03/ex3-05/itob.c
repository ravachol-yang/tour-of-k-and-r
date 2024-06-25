/*
  Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
  character representation in the string s. In particular, itob(n,s,16) formats s as a
  hexadecimal integer in s.
 */

#include <stdio.h>
#define MAX 1000

void itob (int n, char s[], int b);
void reverse (char s[], int len);

int main ()
{
    int n = 200;
    char s[MAX];
    int b = 16;

    itob(n, s, b);

    printf(s);
    printf("\n");
    
    return 0;
}

void itob (int n, char s[], int b)
{
    int i,sign,c;
    c = 0;
    i = 0;

    if ((sign = n) < 0)
	n = -n;

    do {
	c = n % b;
	if (c < 10)
	    s[i++] = c + '0';
	else
	    s[i++] = c - 10 + 'a';
    } while ((n /= b) != 0);

    if (sign < 0)
	s[i++] = '-';

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
