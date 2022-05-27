#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: Pointer to first element of a list
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int minus;
	const listint_t *node;

	node = head;
	while (node)
	{
		minus = node - node->next;
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		if (minus > 0)
			node = node->next;
		else
		{
			printf("-> [%p] %d\n", (void *)node->next, node->next->n);
			break;
		}
	}

	return (count);
}
