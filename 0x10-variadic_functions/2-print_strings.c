#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line
 *
 * @separator: String to separate the strings
 * @n: Integer number of strings
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *val;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(ap, char *);
		if (val == 0)
			printf("(nil)");
		else
			printf("%s", val);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
