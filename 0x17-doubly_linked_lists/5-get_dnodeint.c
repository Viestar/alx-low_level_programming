#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at index
 * @head: list
 * @index: position
 * Return: Pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	while (head & index >= 0)
	{
		if 
		head = head->next;
	}
	return (node);
}