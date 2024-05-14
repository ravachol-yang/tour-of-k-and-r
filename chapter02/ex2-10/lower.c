/*
  Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case,
  with a conditional expression instead of if-else.
 */
#include <stdio.h>

void lower(char s[]);

int main()
{
  char s[] = "Fuck You";
  lower(s);

  printf(s);
  return 0;
}

void lower(char s[])
{
  int i;
  for(i = 0; s[i] != '\0'; i++){
    s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - ('A' - 'a') : s[i];
  }
}
