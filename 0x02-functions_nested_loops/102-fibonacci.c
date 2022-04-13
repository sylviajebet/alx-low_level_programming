#include <stdio.h>

/**
  * main - Program to print first 50 fibonacci munbers
  *
  * Return: 0 for success
  */
int main(void)
{
	long int one = 0, two = 1, num, next;

	for (num = 0; num < 50; num++)
	{
		next = one + two;
		one = two;
		two = next;
		printf("%lu", next);

		if (num < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
