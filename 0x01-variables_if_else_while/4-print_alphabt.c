#include <stdio.h>

/**
  * main - Entry point for program to print lowercase alphabet except q and e
  *
  * Return: 0 for success
  */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr == 'q' || ltr == 'e')
			continue;
		else
			putchar(ltr);
	}
	putchar(\n);
}
