#include <stdio.h>

/**
 * main - Program that prints the opcodes of its own main function
 *
 * @argc: Number of elements
 * @argv: Pointer to array of elements
 * Return: Opcodes in hexadecimal and lower case
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc != 2)
		return (-1);

	if (atoi(argv[1]) < 0)
		return (-1);
	for (count = 0; count < atoi(argv[1]); count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count  < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
