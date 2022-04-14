#include "main.h"

/**
 * print_triangle - Program to print a triangle of size size
 * @size: size is an integer
 *
 * Return: 0 for success
 */

void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (space = 1; space <= (size - j); space++)
				_putchar(' ');
			for (i = 1; i <= j; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
