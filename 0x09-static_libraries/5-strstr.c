#include "main.h"

/**
  * _strstr - Function that locates a substring
  * @haystack: Pointer to string
  * @needle: Pointer to substring
  * Return: Pointer to beginning of substring, NULL if no substring
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *str = haystack, *sub = needle;

		while (*sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (str);
		haystack = str + 1;
	}
	return (0);
}
