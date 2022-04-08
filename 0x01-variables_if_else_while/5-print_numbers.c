#include <stdio.h>

/**
  * main - Entry point for a program that prints single digits to base 10
  *
  * Return: 0 for success
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
