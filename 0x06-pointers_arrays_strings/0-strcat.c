#include "main.h"

/**
 *_strcat - Program that concatenates two strings
 *@dest: Pointer to destination string
 *@src: Pointer to source string
 *Return: Pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, idx;

	while (dest[count] != '\0')
		count++;
	for (idx = 0; src[idx] != '\0'; idx++)
	{
		dest[count] = src[idx];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
