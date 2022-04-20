#include "main.h"

/**
 * print_rev - Program to print a string in reverse
 * @s: Pointer
 * Return: void
 */

void print_rev(char *s)
{
	int idx, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	idx--;

	for (; idx >= 0; idx--)
		_putchar(s[idx]);

	_putchar('\n');
}
