#include "main.h"

/**
 *_strcmp - Function to compare two strings
 *@s1: Pointer to first string
 *@s2: Pointer to second string
 *Return: Less than 0 if string1 is less, greater than 0 if greater
 *0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] == s2[count] && s1[count])
		count++;

	return (s1[count] - s2[count]);
}
