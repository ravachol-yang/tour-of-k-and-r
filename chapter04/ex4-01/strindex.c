/*
  Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
  occurrence of t in s, or -1 if there is none.
 */

#include <stdio.h>
#define MAX 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "shit";

int main ()
{
    char line[MAX];

    char s[] = "sdasdshit812312shit";

    int p;

    p = strindex(s, pattern);

    printf("%d",p);
    printf("\n");
    
    return 0;
}

int getline(char s[], int lim)
{
    int i,c;

    i = 0;

    while(--lim > 0 && (c = getchar() != EOF && c !='\n'))
	s[i++] = c;
    if (c == '\n')
	s[i++] = c;
    s[i] = '\0';
	    
    return i;
}

int strindex(char s[], char t[])
{
    int i,j,k;
    int p = -1;

    for (i=0;s[i] != '\0';i++) {
	for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
	    ;
	if (k > 0 && t[k] == '\0')
	    p = i;
    }

    return p;
}
