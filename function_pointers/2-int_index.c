#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: number of elements
 * @size: size of elements
 * @cmp: index first element.
 *
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
