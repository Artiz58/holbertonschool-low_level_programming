#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: imput value
 * @n: imput value
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
