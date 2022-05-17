#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%c", separator);
	}
	va_end(ap);
}
