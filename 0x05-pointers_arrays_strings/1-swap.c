#include "main.h"

/**
 * swap_int - Program to swap values of two ints
 * @a: First pointer
 * @b: Second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
