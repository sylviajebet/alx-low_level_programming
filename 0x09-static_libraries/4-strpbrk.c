#include "main.h"

/**
  * _strpbrk - Function that searches a string for any of a set of bytes
  * @s: Pointer to memory location
  * @accept: Pointer to memory location
  * Return: Pointer to the byte in s, NULL if no such byte
  */

char *_strpbrk(char *s, char *accept)
{
	int idx;

	for (; *s; s++)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (accept[idx] == *s)
				return (s);
		}
	}
	return (0);
}
