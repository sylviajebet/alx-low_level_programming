#include "main.h"

/**
  * _memset - Function that fills memory with a constant byte
  * @s: Pointer to memory
  * @b: Constant byte
  * @n: Integer, number of bytes
  * Return: Pointer to memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
