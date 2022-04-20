#include "main.h"

/**
 * rev_string - Program that reverses a string
 * @s: Pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, count = 0, temp;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < (count - 1); i++)
	{
		for (j = count + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = temp;
		}
	}
}
