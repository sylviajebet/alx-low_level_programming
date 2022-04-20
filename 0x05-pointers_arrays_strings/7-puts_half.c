#include "main.h"

/**
 * puts_half - Program to print second half of a string
 * @str: Pointer
 * Return: void
 */

void puts_half(char *str)
{
	int idx, mid, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		mid = count / 2;
		for (idx = mid; idx < count; idx++)
			_putchar(str[idx]);
	}
	else
	{
		mid = (count - 1) / 2;
		for (idx = mid + 1; idx < count; idx++)
			_putchar(str[idx]);
	}
	_putchar('\n');
}
