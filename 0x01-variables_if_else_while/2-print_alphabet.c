#include <stdio.h>

/**
  * main - Entry point for a program to print the alphabet
  *
  8 Return: 0 for success
  */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}
