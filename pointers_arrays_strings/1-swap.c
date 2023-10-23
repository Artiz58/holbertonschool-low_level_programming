#include "main.h"
#include <stdio.h>

/**
 *
 *
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
