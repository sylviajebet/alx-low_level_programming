#include "main.h"
#include <stdlib.h>

/**
 * rec_word_count - Function to count words recursively
 *
 * @str: Pointer to array of characters
 * @idx: Integer value for index
 * Return: Int for number of words
 */

int rec_word_count(char *str, int idx)
{
	if (str[idx] == '\0')
		return (0);
	if (str[idx + 1] && str[idx] == ' ' && str[idx + 1] != ' ')
		return (rec_word_count(str, idx + 1) + 1);
	return (rec_word_count(str, idx + 1));
}

/**
 * word_count - Function to count number of words
 *
 * @str: Pointer to string to count
 * Return: Int for number of words
 */

int word_count(char *str)
{
	if (str[0] != ' ')
		return (rec_word_count(str, 0) + 1);
	return (rec_word_count(str, 0));
}

/**
 * strtow - Function to split a string into words
 *
 * @str: Pointer to string to split
 * Return: Pointer to the array of words, otherwise NULL
 */

char **strtow(char *str)
{
	char **str_copy;
	int idx = 0, idx2 = 0, idx3 = 0, count;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = word_count(str);
	if (count < 1)
		return (NULL);
	count++;
	str_copy = malloc(sizeof(char *) * count);
	if (str_copy == NULL)
		return (NULL);
	while (idx < count && *str)
	{
		if (*str != ' ')
		{
			while (str[idx2] != ' ')
				idx2++;
			idx2++;
			str_copy[idx] = malloc(sizeof(char) * idx2);
			if (!str_copy[idx])
			{
				while (--idx >= 0)
					free(str_copy[--idx]);
				free(str_copy);
				return (NULL);
			}
			for (idx3 = 0; idx3 < idx2; idx3++)
			{
				str_copy[idx][idx3] = *str;
				str++;
			}
			str_copy[idx][idx3] = '\0';
			idx++;
		}
		str++;
	}
	str_copy[idx] = '\0';
	return (str_copy);
}
