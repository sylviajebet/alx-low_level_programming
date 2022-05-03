#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: Argument count
 * @argv: Array of pointers to argument
 * Return: 0 for success
 **/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}