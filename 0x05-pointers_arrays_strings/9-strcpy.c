#include "main.h"

/**
 *_strcpy - Program to copy a string at the end of another string
 *@dest: Pointer to string to be copied to
 *@src: Pointer to string to be copied
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
		dest[idx] = src[idx];

	dest[idx] = '\0';
	return (dest);
}
