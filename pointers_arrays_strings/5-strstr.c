#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: imput value
 * @needle: imput value
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *start = haystack;
	char *sub = needle;

	while (*haystack && *sub && *haystack == *sub)
	{
		haystack++;
		sub++;
	}

	if (!*sub)

		return (start);

	haystack = start + 1;
	}

return (haystack);
}
