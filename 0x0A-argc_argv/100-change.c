#include <stdio.h>
#include <stdlib.h>

/**
  * main - Program that prints maximum number of coins for change
  * @argc: Argument count
  * @argv: Array of pointers to argument
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		count += 1;
	}
		printf("%d\n", count);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
