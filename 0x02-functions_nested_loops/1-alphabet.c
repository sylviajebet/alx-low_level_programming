#include "main.h"

/**
  * print_alphabet - Entry point for a program to print lowercase alphabet
  *
  * Return: void for success
  */
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);
	_putchar('\n');
}
