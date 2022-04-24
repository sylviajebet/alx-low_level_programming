#include "main.h"

/**
 *cap_string - Function to capitalize every first letter of a word in a string
 *@s: Pointer to string
 *Return: Pointer to s
 */

char *cap_string(char *s)
{
	int count;

	for (count = 0; s[count]; count++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}

		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
				|| s[count] == ',' || s[count] == ';' || s[count] == '.'
				|| s[count] == '!' || s[count] == '?' || s[count] == '"'
				|| s[count] == '(' || s[count] == ')' || s[count] == '{'
				|| s[count] == '}')
		{
			if (s[count + 1] >= 'a' && s[count + 1] <= 'z')
			{
				s[count + 1] -= 32;
			}
		}
	}
	return (s);
}
