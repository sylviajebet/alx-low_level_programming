#include "main.h"

/**
 * print_square - Program to print a square of size size
 * @size: size is an integer
 *
 * Return: 0 for success
 */

void print_square(int size)
{
	int i,j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
