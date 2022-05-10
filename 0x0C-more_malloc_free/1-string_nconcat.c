#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: Pointer to location of string one
 * @s2: Pointer to location of string two
 * @n: Int for memory size to be allocated
 * Return: Number of bytes of s2 to be concatenated, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx = 0, idx2, size;
	char *str_copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[idx])
		idx++;
	size = ++idx + n;

	str_copy = malloc(size * sizeof(char));
	if (str_copy == NULL)
		return (NULL);

	for (idx = 0; s1[idx]; idx++)
		str_copy[idx] = s1[idx];
	for (idx2 = 0; idx2 < n && s2[idx2]; idx2++)
	{
		str_copy[idx] = s2[idx2];
		idx++;
	}
	str_copy[idx] = '\0';
	return (str_copy);
}
