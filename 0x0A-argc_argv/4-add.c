#include <stdio.h>
#include <stdlib.h>

/**
  * main - Program that adds positive numbers
  * @argc: Argument count
  * @argv: Array of pointers to argument
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int idx, idx2 = argc - 1, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (; idx2; idx2--)
	{
		idx = atoi(argv[idx2]);

		if (idx == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += idx;
	}

	printf("%d\n", sum);

	return (0);
}
