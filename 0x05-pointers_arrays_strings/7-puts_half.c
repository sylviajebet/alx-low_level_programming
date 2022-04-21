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
		idx = mid;
	}
	else
	{
		mid = (count - 1) / 2;
		idx = mid + 1;
	}

	for (; idx < count; idx++)
		_putchar(str[idx]);

	_putchar('\n');
}
