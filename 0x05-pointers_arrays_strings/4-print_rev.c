#include "main.h"

/**
 * print_rev - Program to print a string in reverse
 * @s: Pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	char str[strlen(s)];

	for (i = 0; i < strlen(s); i++)
	{
		for (j = strlen(s); j > 0; j--)
		{
			str[i] = s[j];
			break;
		}
	}
}
