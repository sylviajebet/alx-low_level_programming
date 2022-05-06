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
	int idx = 0, words = 0, check = 0;

	while (str[idx])
	{
		if (str[idx] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			words++;
		}
		idx++;
	}
	return (words);
}

/**
 * strtow - Function to split a string into words
 *
 * @str: Pointer to string to split
 * Return: Pointer to the array of words, otherwise NULL
 */

char **strtow(char *str)
{
	char *tmp_str, **str_copy;
	int idx, idx2 = 0, start, end, count = 0, str_len = 0, w_count;

	while (*(str + str_len))
		str_len++;
	w_count = word_count(str);
	if (w_count == 0)
		return (NULL);
	w_count++;

	str_copy = (char **) malloc(sizeof(char *) * w_count);
	if (str_copy == NULL)
		return (NULL);

	for (idx = 0; idx <= str_len; idx++)
	{
		if (str[idx] == ' ' || str[idx] == '\0')
		{
			if (count)
			{
				end = idx;
				count++;
				tmp_str = (char *) malloc(sizeof(char) * count);
				if (tmp_str == NULL)
					return (NULL);
				while (start < end)
					*tmp_str++ = str[start++];
				*tmp_str = '\0';
				str_copy[idx2] = tmp_str - count;
				idx2++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = idx;
	}

	str_copy[idx2] = NULL;

	return (str_copy);
}
