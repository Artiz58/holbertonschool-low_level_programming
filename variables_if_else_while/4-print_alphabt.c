#include <stdio.h>
/**
 * main - Prints the alphabet except the letter q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'q' && abc != 'e')
		{
			putchar (abc);
		}
	}
	putchar ('\n');

	return (0);
}
