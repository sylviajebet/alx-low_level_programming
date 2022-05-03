#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Program that adds positive numbers
  * @argc: Argument count
  * @argv: Array of pointers to argument
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int idx, idx2, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (idx2 = 1; idx2 < argc; idx2++)
	{
		for (idx = 0; argv[idx2][idx]; idx++)
		{
			if (!(isdigit(argv[idx2][idx])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[idx2]);
	}
	printf("%d\n", sum);
	return (0);
}
