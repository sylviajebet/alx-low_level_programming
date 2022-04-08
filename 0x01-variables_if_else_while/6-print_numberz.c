#include <stdio.h>

/**
  * main - Entry point that prints single digit numbers to base 10 with putchar
  *
  * Return: 0 for success
  */
int main(void)
{
	int num;

	for (num = 32; num <= 42; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
