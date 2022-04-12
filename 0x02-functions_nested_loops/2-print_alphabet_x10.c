#include "main.h"

/**
  * print_alphabet_x10 - Program to print lowercase alphabet 10 times
  *
  * Return: void for success
  */
void print_alphabet_x10(void)
{
	int count;
	char ltr;

	for (count = 0; count < 10; count++)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
}
