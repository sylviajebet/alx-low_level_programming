#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Program to print all natural numbers between n and 98
  * @n: n is an integer
  *
  * Return: void for success
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
	}

	printf("98\n");
}
