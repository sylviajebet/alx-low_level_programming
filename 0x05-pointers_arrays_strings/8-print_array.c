#include "main.h"

/**
 * print_array - Program to print n elements of an array
 * @a: Pointer
 * @n: Integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		_putchar(a[idx]);
		if (idx != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
