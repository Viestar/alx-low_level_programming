#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: list
 * @index: index of the node to be returned
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth_node = 0;

	while (nth_node < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = (*head).next;
	}
	return (head);
}
