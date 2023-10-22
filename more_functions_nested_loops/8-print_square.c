#include "main.h"
#include <stdio.h>
/**
*print_square - Prints # to form squares
*@size: size of the squares to print
*/
void print_square(int size)
{
	int l, w;

	if (size <= 0)
		putchar('\n');
	else
		for (l = 1; l <= size; l++)
		{
			for (w = 1; w <= size; w++)
			{
				putchar('#');
			}
			w = 1;
			putchar('\n');
		}
}
