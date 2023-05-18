#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at index
 * @head: list
 * @index: position
 * Return: Pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head)
			head = head->next;
		else
			return (NULL);
		index--;
	}
	return (head);
}
