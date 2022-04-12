#include "main.h"


/**
  * main - Entry point for a program to print _putchar
  *
  * Return: 0 for success
  */
int main(void)
{
	char ptchar[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ptchar[i]);
	}
	printf("\n");
	return (0);
}
