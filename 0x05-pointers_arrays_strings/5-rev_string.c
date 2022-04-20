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

	j = count - 1;

	for (i = 0; i < (count - 1); i++)
	{
		while (i < j)
		{
			temp = s[count];
			s[count] = s[j];
			s[j] = temp;
			j--;
		}
	}
}
