#include <stdio.h>
#include "main.h"

int _atoi(char *s) 
{
	int sign = 1;
	int res = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '+' || *s == '-')
	{
		sign = (*s == '+') ? 1 : -1;
		s++;
	}

	while (*s >= '0' && *s <= '9') {
		res *= 10;
		res += *s - '0';
		s++;
	}

	return (res * sign);
}
