#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 *
 * @s1: Pointer to character array
 * @s2: Pointer to another character array
 * Return: Pointer to the duplicated string, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int str_len1 = 0, str_len2 = 0, idx, idx2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str_len1])
		str_len1++;
	while (s2[str_len2])
		str_len2++;

	str = malloc(sizeof(char) * (str_len1 + str_len2 + 1));

	if (str == NULL)
		return (NULL);

	for (idx = 0; idx < str_len1; idx++)
		str[idx] = s1[idx];

	for (idx2 = 0; idx2 < (str_len2 + 1); idx2++)
		str[idx + idx2] = s2[idx2];

	return (str);
}
