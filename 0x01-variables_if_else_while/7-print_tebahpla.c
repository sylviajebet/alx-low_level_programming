#include <stdio.h>

/**
  * main - Entry point for a program to print reverse alphabet
  *
  * Return: 0for success
  */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
		putchar(ltr);
	putchar('\n');
	return (0);
}
