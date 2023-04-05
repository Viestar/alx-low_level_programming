#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a specific index
 * @n: node to be insterted
 * @idx: index to insert the node
 * @head: pointer to the linked list
 * Return: the new list address or NULL incase of failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_list;
	/* Cloning the list for ammendments */
	listint_t *clone = *head;
	unsigned int counter = 0;

	/* Allocating space for the new list */
	new_list = malloc(sizeof(listint_t));

	/* Checking if memeory was allocated */
	if (new_list == NULL)
		return (NULL);
	/* Insert n at the beginning of the list*/
	(*new_list).n = n;

	/* Incase index is 0 */
	if (idx == 0)
	{
		(*new_list).n = n;
		(*new_list).next = *head;
		*head = new_list;
		return (new_list);
	}

	while (clone && counter < (idx - 1))
	{
		if (clone == NULL)
			return (NULL);

		if ((*clone).next != NULL)
		{
			counter++;
			clone = (*clone).next;
		}
		else
			return (NULL);
	}

	(*new_list).next = (*clone).next;
	(*clone).next = new_list;
	return (new_list);
}
