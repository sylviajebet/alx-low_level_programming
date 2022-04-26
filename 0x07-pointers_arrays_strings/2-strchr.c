#include "main.h"

/**
  * _strchr - Function that locates a character in a string
  * @s: Pointer to a string
  * @c: Character
  * Return: Pointer to the first occurence of character c
  * NULL if character c not in string s
  */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *s = '\0', ptr;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			ptr = (s + i);
	}
	return (ptr);
}
