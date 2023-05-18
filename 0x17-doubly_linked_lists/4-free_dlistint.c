#include "lists.h"

/**
 * free_dlistint - Frees all nodes.
 * @head: list to be freed.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
