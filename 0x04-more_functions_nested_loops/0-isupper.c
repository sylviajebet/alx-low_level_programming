#include "main.h"

/**
 * _isupper - Program that checks for uppercase character
 * @c: c is a character
 *
 * Return: 1 for uppercase
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c <= 'z')
		return (0);
	else
		return (0);
}
