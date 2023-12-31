#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: impt value.
 *
 * Return: value.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
