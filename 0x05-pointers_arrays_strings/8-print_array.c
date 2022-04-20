#include "main.h"
#include <stdio.h>

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
		printf("%d", a[idx]);
		if (idx != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
