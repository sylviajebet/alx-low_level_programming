#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of
 * a listint_t linked list
 *
 * @head: Pointer to first list element
 * @index: Index of the node
 * Return: nth node of a listint_t linked list, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int idx;

	if (head == NULL)
		return (0);
	for (idx = 0; temp; idx++)
	{
		if (idx == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
