/*
  Exercise 4-2. Extend atof to handle scientific notation of the form
 */

#include <ctype.h>
#define MAX 100

double atof (char s[])
{
    double simple_atof(char s[]);

    double base, e;
    int i, j, k;
    char e_s[MAX];
	
    base = simple_atof(s);

    for (i = 0; isdigit(s[i]) || s[i] == '+' || s[i] == '-' || s[i] == '.'; i++)
	;

    if (s[i] == 'e' || s[i] == 'E')
	i++;

    for (j = 0; s[i] != '\0'; j++, i++)
	e_s[j] = s[i];

    e = simple_atof(e_s);

    if (e > 0) {
	for (k = 0; k < e; k++)
	    base *= 10;
    } else {
	for (k = 0; k > e; k--)
	    base /= 10;
    }
    
    return base;
    
}

double simple_atof(char s[])
{
    double val, power;

    int i, sign;

    for (i = 0; isspace(s[i]); i++)
	;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '-' || s[i] == '+')
	i++;

    for (val = 0.0; isdigit(s[i]); i++)
	val = 10.0 * val + s[i] - '0';

    if (s[i] == '.') 
	i++;
    for (power = 1.0; isdigit(s[i]); i++) {
	val = 10.0 * val + s[i] - '0';
	power *= 10;
    }

    return sign * val / power;
}
