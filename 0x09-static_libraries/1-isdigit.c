#include "main.h"

/**
 * _isdigit - Program to check for a digit
 * @c: c is an integer
 *
 * Return: 1 if digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
