#include "variadic_functions.h"
#include <stdio.h>
/**
 * char_print - Function to print a character
 * @ap: Argument from print_all
 */
void char_print(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * int_print - Function to print an int
 * @ap: Argument from print_all
 */
void int_print(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * float_print - Function to print a float
 * @ap: Argument from print_all
 */
void float_print(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * str_print - Function to print a string
 * @ap: Argument from print_all
 */
void str_print(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - Function that prints anything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, idx = 0;
	char *separator = "";

	arg_type arg[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", str_print},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		idx = 0;
		while (idx <= 3)
		{
			if (*arg[idx].strct == format[i])
			{
				printf("%s", separator);
				arg[idx].arg_struct(ap);
				separator = ", ";
				break;
			}
			idx++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
