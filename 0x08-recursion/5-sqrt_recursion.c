#include "main.h"

/**
 * _get_sqrt - Function to return squareroot to _sqrt_recursion
 * @n: Integer to get the sqrt of
 * @sqrt: Integer to be the sqrt value
 * Return: Squareroot value
 */

int _get_sqrt(int n, int sqrt)
{
	if ((sqrt * sqrt) > n)
		return (-1);
	else if ((sqrt * sqrt) == n)
		return (sqrt);
	else
		return (_get_sqrt(n, (sqrt + 1)));
}

/**
 * _sqrt_recursion - Function that returns the natural sqrt of a number
 * @n: Integer to get the squareroot of
 * Return: Squareroot of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_get_sqrt(n, 0));
}
