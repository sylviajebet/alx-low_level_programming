#include "main.h"

/**
 * string_toupper - Function to convert lowercase letters to uppercase
 * @s: Pointer to a string
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *s)
{
	int idx;

	for (idx = 0; s[idx]; idx++)
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] -= 32;
		}
	}
	return (s);
}
