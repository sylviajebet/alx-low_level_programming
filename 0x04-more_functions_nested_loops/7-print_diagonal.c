#include "main.h"

/**
 * print_diagonal - Program to print diagonal line of length n
 * @n: n is an integer
 *
 * Return: 0 for success
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ' * (n - 1));
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
