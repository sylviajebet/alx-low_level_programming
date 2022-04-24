#include "main.h"

/**
 * rot13 - Function to encode a string in rot13
 * @s: Pointer to tring to be encoded
 * Return: Pointer to string s
 */

char *rot13(char *s)
{
	int count, idx;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count = 0; s[count]; count++)
	{
		for (idx = 0; norm[idx]; idx++)
		{
			if (s[count] == norm[idx])
			{
				s[count] = rot13[idx];
				break;
			}
		}
	}
	return (s);
}
