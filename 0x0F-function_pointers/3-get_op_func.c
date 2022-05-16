#include "3-calc.h"

/**
 * get_op_func - Function that selects the function
 * to perform the user's selected operation
 *
 * @s: Operator passed as argument to the program
 * Return: Pointer to the function for the stated operation
 */

int (*get_op_func(char *s))(int, int)
{
	int idx = 0;

	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}

	while (idx < 5)
	{
		if (strcmp(s, operations[idx].operation) == 0)
			return (operations[ids].f);
		idx++;
	}
	return (NULL);
}
