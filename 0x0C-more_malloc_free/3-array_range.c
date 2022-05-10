#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 *
 * @min: Int for minimum value
 * @max: Int for maximum value
 * Return: Pointer value to the new array, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *arr, idx, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);

	if (arr == NULL)
		return (NULL);
	for (idx = 0; idx < range; idx++)
		*(arr + idx) = min + idx;
	return (arr);
}
