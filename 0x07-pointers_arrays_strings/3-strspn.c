#include "main.h"

/**
  * _strspn - Function that takes the length of a prefix substring
  * @s: Pointer to initial segment
  * @accept: Pointer
  * Return: Number of bytes in s, with only bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, idx, num = 0;

	for (i = 0; s[i]; i++)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (s[i] == accept[idx])
				num++;
		}
		if (num < i)
			break;
	}
	return (num);
}
