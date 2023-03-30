#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list.
 * @head: A pointer to the freed list.
 */

void free_list(list_t *head)
{
	/*Temporary list to store the last head*/
	list_t *list_temp;

	while (head)
	{
		list_temp = (*head).next;

		/* Freeing all heads */
		free((*head).str);
		free(head);

		/* Point the one first and last head to list_temp which is NULL*/
		head = list_temp;
	}
}
