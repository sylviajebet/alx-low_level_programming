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
		if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else
			printf(num);

		while (num != 100)
			printf(" ");
	}
	printf("\n");
}
