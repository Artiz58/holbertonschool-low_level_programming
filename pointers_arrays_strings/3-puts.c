#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Return: print string
 */
void _puts(char *str)
{
	int i = 0;
	char letter;

	while (str[i] != '\0')
	{
		letter = str[i];
		_putchar(letter);
		i++;
	}
_putchar('\n');
}
