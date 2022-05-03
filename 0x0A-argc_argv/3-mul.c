#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Argument count
 * @argv: Array of pointers to argument
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int idx, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (idx = 1; idx < argc; idx++)
		mul *= atoi(argv[idx]);

	printf("%d\n", mul);
	return (0);
}
