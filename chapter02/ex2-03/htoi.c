/*
  Exercise 2-3.
  Write a function htoi(s), which converts a string of hexadecimal digits
  (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
  through 9, a through f, and A through F.
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_HEX_LEN 100
#define HEX 16

int htoi(char h[], int len);

int main()
{
  char c; /* input */
  char h[MAX_HEX_LEN]; /* the input hex */
  int output;
  
  int i; /* counter */
  for(i = 0; i<MAX_HEX_LEN && (c=getchar()) != EOF && c != '\n'; ++i)
    h[i] = c;


  /* convert */
  if (i > 0)
    output = htoi(h, i);
  else
    output = 0;

  /* give the output */
  printf("HEX: %s\n", h);
  printf("DEC: %d\n", output);

  return 0;
}

int htoi(char h[], int len) {
  int i = 0;
  int j = 2;
  int k = 0;
  int bit = 1;
  /* input hex must start with 0x or 0X */
  if (h[0] == '0' && (h[1] == 'x' || h[1] == 'X')) {
    for (j = 2; j < len; ++j) {
      /* the input must be 0~9 and a~f */
      if (isdigit(h[j])) {
	bit = h[j] - '0';
      } else if (h[j] >= 'A' && h[j] <= 'F') {
	bit = 10 + h[j] - 'A';
      } else if (h[j] >= 'a' && h[j] <= 'f') {
	bit = 10 + h[j] - 'a';
      } else {
	i = 0;
	break;
      }
      for (k=0; k<(len - 1 - j); ++k)
	bit = bit * HEX;
      
      i = i + bit;
    }
  }
  return i;
}
