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
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}
