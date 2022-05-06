#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2-D array of integers
 *
 * @width: Integer value for width
 * @height: Integer value for width
 * Return: Pointer to 2-D array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr, idx, idx2;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (idx = 0; idx < height; idx++)
	{
		arr[idx] = (int *) malloc(width * sizeof(int));
		if (!arr[idx])
		{
			for (idx2 = 0; idx2 <= idx; idx2++)
				free(arr[idx2]);
			free(arr);
			return (NULL);
		}

	}
	for (idx = 0; idx < height; idx++)
	{
		for (idx2 = 0; idx2 < width; idx2++)
			arr[idx][idx2] = 0;
	}
	return (arr);
}
