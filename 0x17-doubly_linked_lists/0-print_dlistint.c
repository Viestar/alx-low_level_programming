#include "lists.h"

/**
 * print_dlistint - Prints all elements
 * @h: the double linked list
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* To save the nodes */
	size_t nodes = 0;

	while (h)
	{
		/* Checking if the list is not empty */
		if ((*h).next || (*h).prev != NULL)
		{
			nodes += 1;
			printf("%d\n", (*h).n);
		}
		h = (*h).next;
	}
	return (nodes);
}
