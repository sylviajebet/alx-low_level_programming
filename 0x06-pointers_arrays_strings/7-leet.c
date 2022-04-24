#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @s: Char
 * Return: Pointer to the string
*/

char *leet(char *s)
{
	int idx, idx_ltrs;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (idx = 0; s[idx]; idx++)
	{
		for (idx_ltrs = 0; letters[idx_ltrs]; idx_ltrs++)
		{
			if (letters[idx_ltrs] == s[idx])
				s[idx] = numbers[idx_ltrs];
		}
	}
	return (s);
}
