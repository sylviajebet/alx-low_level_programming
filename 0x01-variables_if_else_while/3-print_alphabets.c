#include <stdio.h>

/**
  * main - Entry point for program to print alphabet in lowecase then uppercase
  *
  * Return: 0 for success
  */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		putchar(ltr);
	for (ltr = 'A'; ltr <= 'Z'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}
