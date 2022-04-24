#include "main.h"

/**
 *_strncpy - Function to copy n bytes of a source string
 *@dest: Pointer to destination string
 *@src: Pointer to source string
 *@n: Integer of number of bytes
 *Return: Pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; idx < n && src[idx]; idx++)
		dest[idx] = src[idx];

	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
