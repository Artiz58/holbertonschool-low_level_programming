#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char abc;

	while (i <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}

	_putchar('\n');

	i++;
	}
}
