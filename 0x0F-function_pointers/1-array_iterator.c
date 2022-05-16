#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array
 *
 * @array: Pointer to array location
 * @size: Size of the array
 * @action: Pointer to function used
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array && action)
	{
		for (idx = 0; idx < size; idx++)
			action(array[idx]);
	}
}
