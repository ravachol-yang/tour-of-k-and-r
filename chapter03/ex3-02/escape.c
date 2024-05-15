/*
  Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
  into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
  a function for the other direction as well, converting escape sequences into the real characters.
 */
#include <stdio.h>

#define MAX 100

void escape (char from[], char to[]);
void descape (char from[], char to[]);

int main ()
{
  char from[] = "Fuck\tyou\nshit";
  char to[MAX];
  char back[MAX];

  escape(from, to);
  descape(to, back);

  printf("Escaped:\n");
  printf(to);

  printf("\n\nDescaped:\n");
  printf(back);
  
  return 0;
}

/* replace blanks with escape sequences */
void escape (char from[], char to[])
{
  int i,j = 0;

  for (i = 0; from[i] != '\0'; i++) {

    switch (from[i]) {
    case '\t':
      to[j] = '\\';
      to[++j] = 't';
      break;
    case '\n':
      to[j] = '\\';
      to[++j] = 'n';
      break;
    default:
      to[j] = from[i];
      break;
    }
    j++;
  }
  to[j] = '\0';
}

/* replace escape sequences with real chars */
void descape (char from[], char to[])
{
  int i,j = 0;

  for (i = 0; from[i] != '\0'; i++) {

    if (from[i] == '\\') {
      switch (from[++i]) {
      case 't':
	to[j] = '\t';
	break;
      case 'n':
	to[j] = '\n';
	break;
      }
    } else {
      to[j] = from[i];
    }
    j++;
  }
  to[j] = '\0';
}
