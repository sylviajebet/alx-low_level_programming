#include "main.h"

/**
 * print_line - Program to print a line of n length
 * @n: n is an integer
 * Return: 0 for success
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
