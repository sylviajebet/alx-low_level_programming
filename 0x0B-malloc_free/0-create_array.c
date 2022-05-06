#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that initializes an array of chars
 * with a specific char
 * @size: Unsigned int for the array size
 * @c: Char to initialize
 * Return: Pointer to an array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	/* Using malloc to assign at location ar */
	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
