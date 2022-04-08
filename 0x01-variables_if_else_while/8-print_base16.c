#include <stdio.h>

/**
  * main -Entry point for a program to print hexadecimal numbers in lowercase
  *
  * Return: 0 for success
  */
int main(void)
{
	char hex;

	for (hex = 48; hex <= 57; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
