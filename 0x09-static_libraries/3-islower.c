#include "main.h"

/**
  * _islower - Program to check if a value is lowercase
  * @c: c is an ASCII character
  *
  * Return: 1 for lowercase
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
