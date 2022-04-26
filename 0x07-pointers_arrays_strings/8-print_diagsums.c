#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Function that prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: Pointer to a 2-D array
  * @size: Integer, size of array
  * Return: Void
  */

void print_diagsums(int *a, int size)
{
	int idx, col = 0, row = 0;

	for (idx = 0; idx < (size * size); idx += size + 1)
		col += a[idx];

	for (idx = size - 1; idx < (size * size) - 1; idx += size + 1)
		row += a[idx];

	printf("%d, %d\n", col, row);

}
