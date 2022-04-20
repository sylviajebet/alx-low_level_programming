#include "main.h"

/**
 * puts2 - Program to print every other char of a string
 * @str: Pointer
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
