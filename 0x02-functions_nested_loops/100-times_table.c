#include "main.h"
#include <stdio.h>

/**
  * print_times_table - P rogram to print n times table
  * @n: n is an integer
  *
  * Return: void
  */
void print_times_table(int n)
{
	int row, column, product, hundreds, tens, ones;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;
			hundreds = product / 100;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else if (product >= 10 && product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(tens % 10 + '0');
				_putchar(ones + '0');
			}
			else if (product >= 100 && product < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(hundreds + '0');
				_putchar(tens % 10 + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
