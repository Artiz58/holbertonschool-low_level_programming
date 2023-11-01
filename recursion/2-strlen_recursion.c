#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: imput value.
 *
 * Return: longit.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
