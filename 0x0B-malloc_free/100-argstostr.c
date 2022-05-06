#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all args of a program
 *
 * @ac: Integer value for number of args
 * @av: Pointer to char array
 * Return: Pointer to new string, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	char *str_copy;
	int idx, idx2, count = 0, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (idx = 0; idx < ac; idx++)
	{
		for (idx2 = 0; av[idx][idx2]; idx2++)
			size++;
		size++;
	}

	str_copy = malloc((sizeof(char) * size) + 1);
	if (str_copy == NULL)
		return (NULL);
	for (idx = 0; idx < ac; idx++)
	{
		for (idx2 = 0; av[idx][idx2]; idx2++)
		{
			str_copy[count] = av[idx][idx2];
			count++;
		}
		str_copy[count] = '\n';
		count++;
	}
	str_copy[count] = '\0';
	return (str_copy);
}
