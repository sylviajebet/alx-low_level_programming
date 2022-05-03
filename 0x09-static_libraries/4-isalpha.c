#include "main.h"

/**
 * _isalpha - Program to check if character is an alphabet
 * @c: c is an ASCII character
 *
 * Return: 1 if lowercase or uppercase alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
