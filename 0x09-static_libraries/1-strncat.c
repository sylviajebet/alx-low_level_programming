#include "main.h"

/**
 *_strncat - Function that concatenates two strings using n bytes from source
 *@dest: Pointer to destination string
 *@src: Pointer to source string
 *@n: Integer of number of bytes
 *Return: Pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, idx;

	while (dest[count])
		count++;

	for (idx = 0; idx < n && src[idx]; idx++)
	{
		dest[count] = src[idx];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
