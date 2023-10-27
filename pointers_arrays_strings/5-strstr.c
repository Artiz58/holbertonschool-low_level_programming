#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: input value
 * @needle: input value
 *
 * Return: pointer to the first
 * occurrence of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr = haystack;
	char *needle_ptr = needle;

	while (*haystack_ptr != '\0')
	{
		if (*haystack_ptr == *needle_ptr)
		{
			char *haystack_ptr_tmp = haystack_ptr + 1;
			char *needle_ptr_tmp = needle_ptr + 1;
			while (*haystack_ptr_tmp != '\0' && *needle_ptr_tmp != '\0')
			{
				if (*haystack_ptr_tmp != *needle_ptr_tmp)
				{
					break;
				}
				haystack_ptr_tmp++;
				needle_ptr_tmp++;
			}
			if (*needle_ptr_tmp == '\0') 
			{
				return haystack_ptr;
			}
		}
		haystack_ptr++;
	}
	return NULL;
}
