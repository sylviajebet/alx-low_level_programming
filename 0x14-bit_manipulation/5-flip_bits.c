#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: First integer number
 * @m: Second integer number
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int val = n ^ m, bits = 0;

	while (val > 0)
	{
		bits++;
		val &= (val - 1);
	}
	return (bits);
}
