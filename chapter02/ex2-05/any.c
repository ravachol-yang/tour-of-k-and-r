/*
  Exercise 2-5.
  Write the function any(s1,s2), which returns the first location in a string s1
  where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
  (The standard library function strpbrk does the same job but returns a pointer to the
  location.)
 */
#include <stdio.h>

int any(char s1[], char s2[]);

int main ()
{
  char s1[] = "fuck";
  char s2[] = "ou";

  /* no occur */
  char s3[] = "ab";
  
  int location;
  int no_location;

  location = any(s1, s2);
  no_location = any(s1, s3);
  
  printf("%d\n", location);
  printf("%d\n", no_location);
  
  return 0;
}

int any(char s1[], char s2[])
{
  int i,j;
  int occur = 0;
  int location = -1; /* if there no occur */

  for(i = 0; s1[i] != '\0'; i++){
    for(j = 0; s2[j] != '\0'; j++){
      if (s1[i] == s2[j]) {
	occur = 1;
	location = i;
	break;
      }
    }

    if (occur)
      break;
  }
  
  return location;
}
