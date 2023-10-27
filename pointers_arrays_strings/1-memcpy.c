#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: imput value
 * @src: imput value
 * @n: imput value
 *
 * Return: dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
