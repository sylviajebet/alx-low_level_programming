#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Program to take a pointer and change value to 98
 * @n: Pointer
 * Return: 0 for success
 */

void reset_to_98(int *n)
{
	int num = 98;

	n = &num;
}
