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
	int idx = argc - 1, sum = 0, val = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (argc > 0)
	{
		for (i = 0; argv[argc][idx]; i++)
		{
			if (!(isdigit(argv[argc][idx])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		sum += val;
        argc--;
	}

	printf("%d\n", sum);

	return (0);
}
