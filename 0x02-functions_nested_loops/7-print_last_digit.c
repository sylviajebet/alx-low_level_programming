#include "main.h"

/**
  * print_last_digit - Program that prints last digit of a number
  * @n: n is an integer
  *
  * Return: integer
  */
int print_last_digit(int n)
{
	int lst = n % 10;

	if (n < 0)
		lst *= -1;
	_putchar(lst + '0');
	return (lst);
}
