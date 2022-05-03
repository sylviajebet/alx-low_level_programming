#include "main.h"

/**
 * _isupper - Program that checks for uppercase character
 * @c: c is an integer
 *
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
