/*
  Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
  s1 that matches any character in the string s2.
 */ 
#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main ()
{
  char s1[] = "fuck you";
  char s2[] = "ou";

  squeeze(s1,s2);

  printf(s1);
  
  return 0;
}

/* deletes each character in s1 that matches any character in the string s2 */
void squeeze(char s1[], char s2[])
{
  int i,j,k;
  int skip;
  for(i = j = 0; s1[i] != '\0'; i++) {

    skip = 0;
    
    for(k = 0; s2[k] != '\0'; k++) {
      if(s1[i] == s2[k])
	skip = 1;
    }

    if(!skip)
      s1[j++] = s1[i];
  }
  s1[j] = '\0';
}
