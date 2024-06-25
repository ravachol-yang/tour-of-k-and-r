/*
  Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in
  the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either
  case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange
  that a leading or trailing - is taken literally.
 */
#include <stdio.h>

#define MAX 1000

void expand(char s1[], char s2[]);

int main ()
{
    char s1[] = "asdasda-zaaa-z0-9";
    char s2[MAX];

    expand(s1, s2);

    printf(s2);
    printf("\n");

    return 0;
}

void expand(char s1[], char s2[])
{
    int i,j = 0;
    int k;

    for (i=0; s1[i] != '\0'; ++i) {
	k = 0;
	if (s1[i+1] == '-') {
	    if (s1[i] < s1[i+2]) {
		j--;
		while (s2[j++] < s1[i+2]) {
		    s2[j] = s1[i]+k;
		    ++k;
		    printf(s2);
		    printf("\n");
		}
		i+=2;
		k = 0;
		j--;
	    }
	}
	s2[j] = s1[i];
	++j;
    }
    s2[j] = '\0';
}
