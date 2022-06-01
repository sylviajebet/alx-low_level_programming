#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: Pointer to a string of 0s and 1s
 * Return: The converted in, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int strlen = 0;

	if (b[strlen] == '\0')
		return (0);

	while ((b[strlen] == '0') || (b[strlen] == '1'))
	{
		val <<= 1;
		val += b[strlen] - '0';
		strlen++;
	}

	return (val);
}
