#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Function that prints anything
 *
 * @format: List of types of arguments passed to the function
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *separator = "", *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%d", separator, (char)va_arg(ap, unsigned int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, unsigned int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(ap, double));
				break;
			case 's':
				printf("%s", separator);
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
