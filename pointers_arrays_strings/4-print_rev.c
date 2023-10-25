#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Return: print string in reverse
 */
void print_rev(char *s)
{
	int i = 0;
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		rev = s[i];
		_putchar(rev);
		i--;
	}
	_putchar('\n');
}
