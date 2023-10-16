#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char abc;
	char ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar (abc);
	}
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	{
		putchar (ABC);
	}
	putchar ('\n');

	return (0);
}
