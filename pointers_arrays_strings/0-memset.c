#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: imput value
 * @b: imput value
 * @n: imput without negative number
 * Return: s print de value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
