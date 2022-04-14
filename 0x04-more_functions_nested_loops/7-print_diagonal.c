#include "main.h"

/**
 * print_diagonal - Program to print diagonal line of length n
 * @n: n is an integer
 *
 * Return: 0 for success
 */

void print_diagonal(int n)
{
	int space;

	if (n <= 0)
		_putchar('\n');
	else
		for (space = 0; space < n; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
}
