#include "main.h"
#include <stdio.h>

/**
 * _puts - Program to print a string
 * @str: Pointer
 * Return: void
 */

void _puts(char *str)
{
	return (_puts(*str));
}