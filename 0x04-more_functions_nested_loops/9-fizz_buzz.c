#include <stdio.h>

/**
 * main - Program to print fizz buzz
 *
 * Return: 0 for success
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (num % 5 == 0)
			printf("%s", "Buzz");
		else if (num % 3 == 0)
			printf("%s", "Fizz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
