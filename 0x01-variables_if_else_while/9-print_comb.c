#include <stdio.h>

/**
  * main - Entry point for program printing all combos for single digits
  *
  * Return: 0 for success
  */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
