/*
  push and pop
 */

#include <stdio.h>
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push (double f)
{
    if (sp < MAXVAL)
	val[sp++] = f;
    else
	printf("stack is full\n");
    
}

double pop (void)
{
    if (sp > 0)
	return val[--sp];
    else {
	printf("empty stack\n");
	return 0.0;
    }
}
