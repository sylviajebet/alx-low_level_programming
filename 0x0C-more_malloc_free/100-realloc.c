#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 *
 * * @ptr: Pointer to memory location
 * @old_size: Int for old memory size
 * @new_size: Int for new memory size
 * Return: Pointer value to the allocated memory, otherwise 98
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (new_ptr);
		for (idx = 0; idx < old_size; idx++)
			new_ptr[idx] = *((char *)ptr + 1);
		free(ptr);
	}
	return (new_ptr);
}
