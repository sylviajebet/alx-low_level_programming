#include "main.h"

/**
 * print_square - Program to print a square of size size
 * @size: size is an integer
 *
 * Return: 0 for success
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size > 0)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
			size--;
		}
	}
}
