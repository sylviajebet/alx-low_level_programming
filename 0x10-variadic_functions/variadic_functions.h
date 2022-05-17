#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct arg_type - Struct definition for arg_type
 * @strct: Type of Struct
 * @arg_struct: Printed function
 */
typedef struct arg_type
{
char *strct;
void (*arg_struct)(va_list);
} arg_type;

#endif
