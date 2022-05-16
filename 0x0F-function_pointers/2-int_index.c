#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 *
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Pointer to function used to compare values
 * Return: Index of first element, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (idx = 0; idx < size; idx++)
		{
			if (cmp(array[idx]))
				return (idx);
		}
	}
	return (-1);
}
