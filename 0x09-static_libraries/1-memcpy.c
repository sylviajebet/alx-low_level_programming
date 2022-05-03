#include "main.h"

/**
  * _memcpy - Function that copies memory area
  * @dest: Pointer to destination
  * @src: Pointer to source
  * @n: Integer, number of bytes
  * Return: Pointer to destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
