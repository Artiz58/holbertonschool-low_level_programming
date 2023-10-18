#include "main.h"

/**
 * _isalpha - check for lowercase and uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1 for lowercase and uppercase character or 0 for anything else
 */

int _isalpha(int c)
{
        if ((c >= 97 && c <= 65) || (c >= 122 && c <= 90))
        {
                return (1);
        }

        return (0);
}
