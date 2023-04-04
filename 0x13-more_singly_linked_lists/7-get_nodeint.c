#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: list
 * @index: index of the node to be returned
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Variable to store the node to be returned */
	unsigned int nth_node;

	nth_node = 0;

	/* Looping through the list until node index is reached */
	while (head && nth_node < index)
	{
		/* Checking if index will be reached */
		if (head != NULL)
		{
			nth_node++;
			head = (*head).next;
		}
		else
			return (NULL);
	}
	return (head);
}
