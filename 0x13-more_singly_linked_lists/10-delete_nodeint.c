#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index.
 * @head: linked list
 * @index: node position to be deleted.
 * Return: 0 for success or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_new_list; /* Variable for the new appended list*/
	listint_t *clone = *head; /* *head clone for ammendments */
	unsigned int counter = 0;

	/* Checking if not a null list was passed */
	if (clone == NULL)
		/* Returning -1 as instructed */
		return (-1);

	/* Checking for Zero index */
	if (index != 0)
	{
		while (clone && counter < (index - 1))
		{
			if (clone != NULL || (*clone).next != NULL)
			{
				counter++;
				/* Pointing to the next node until index is reached */
				clone = (*clone).next;
			}
			else
				return (-1);
		}
		/* Storing the indexed node in a new list */
		temp_new_list = (*clone).next;

		/* */
		(*clone).next = (*temp_new_list).next;

		free(temp_new_list);

		return (1);
	}
	else
	{
		*head = (*(*head)).next;
		free(clone);
		return (1);
	}
}
