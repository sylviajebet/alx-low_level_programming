#include <stdio.h>

/**
 * main - Program that prints number of arguments passed to it
 * @argc: Arguemnet count
 * @argv: Array of pointer to argument
 * Return: 0
 **/

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
