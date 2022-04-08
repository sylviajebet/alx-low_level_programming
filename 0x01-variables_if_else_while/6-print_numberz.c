#include <stdio.h>

/**
  * main - Entry point that prints single digit numbers to base 10 with putchar
  *
  * Return: 0 for success
  */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
