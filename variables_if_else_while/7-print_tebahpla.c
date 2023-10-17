#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase in a mirror.
 *
 * Return: Always 0.
 */

int main(void)
{
        char abc;

        for (abc = 'z'; abc >= 'a'; --abc)
        {
                putchar (abc);
        }
        putchar ('\n');

        return (0);
}
