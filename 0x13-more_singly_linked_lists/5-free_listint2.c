#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *empty_list;

	/* Incase the list is empty */
	if (head == NULL)
		return;

	/* Looping through the list freeing nodes */
	while (*head)
	{
		/* */
		empty_list = (*(*head)).next;

		/* */
		free(*head);

		/* */
		*head = empty_list;
	}

	head = NULL;
}
