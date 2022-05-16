#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point for main function
 *
 * @argc: Integer for count of arguments
 * @argv: Pointer to array of elements
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result;
	char s1, s2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s1 = argv[2][0];
	s2 = argv[2][1];
	if ((s1 != '+' && s1 != '-' && s1 != '*' && s1 != '/' && s1 != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (s2 != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
