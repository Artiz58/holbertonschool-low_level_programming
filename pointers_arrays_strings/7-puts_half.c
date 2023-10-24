#include "main.h"
#include <string.h>

/**
 * puts_half - prints the value
 * @str: pointer to the string to print
 *
 * Return: print string
 */
void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 5; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
