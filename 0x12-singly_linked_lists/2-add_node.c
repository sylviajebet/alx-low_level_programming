#include "lists.h"

/**
 * str_len - Function to find the length of a string
 * @str: The string to find length of
 * Return: Integer length of a string
 */
int _strlen(const char *str)
{
	int count;

	while (str[count])
		count++;
	return (count);
}

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * @head: Pointer to first list element
 * @str: String
 * Return: Address of the new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *val;
	char *dupstr;
	int idx;

	if (str == NULL || head == NULL)
		return (NULL);
	val = *head;
	dupstr = malloc((_strlen(str) + 1) * sizeof(char));
	if (dupstr == NULL)
		return (NULL);
	for (idx = 0; str[idx]; idx++)
		dupstr[idx] = str[idx];
	val = malloc(sizeof(list_t));
	if (val == NULL)
	{
		free(dupstr);
		return (NULL);
	}
	val->next = *head;
	val->str = strdup(str);
	val->len = _strlen(str);

	*head = val;
	return (*head);

}
