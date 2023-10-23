#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Return: print string
 */
void rev_string(char *s)
{
	int l = strlen(s);
	int m = l / 2;
	int i;
	char temp;

	for (i = 0; i < m; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
