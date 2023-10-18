#include "main.h"

/**
 * print_sign - Print de value number of ACSII.
 * @n: The character to be checked.
 *
 * Return: 1 print sign.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
