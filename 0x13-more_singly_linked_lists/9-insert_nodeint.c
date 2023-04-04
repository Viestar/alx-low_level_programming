#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a specific index
 * @n: node to be insterted
 * @idx: index to insert the node
 * @head: pointer to the linked list
 * Return: the new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_list;
	unsigned int counter = 0;

	/* Allocating space for the new list */
	new_list = malloc(sizeof(listint_t));

	/* Checking if memeory was allocated */
	if (new_list == NULL)
		return (NULL);
	else
		/* Insert n at the beginning of the list*/
		(*new_list).n = n;

	/* Checking if a non null list was passed */
	if (*head != NULL || (*(*head)).next != NULL)
	{
		while (*head && counter < (idx - 1))
		{
			counter++;
			*head = (*(*head)).next;
		}

		(*new_list).next = (*(*head)).next;
		(*(*head)).next = new_list;
		return (new_list);
	}
	else
		return (NULL);
}
