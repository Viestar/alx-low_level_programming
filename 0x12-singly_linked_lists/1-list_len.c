#include "lists.h"

/**
 * list_len - Counts elements in a list
 * @h: The linked list_t list.
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	/* Variable to store number of elements to be returned */
	size_t elements = 0;


	while (h != NULL)
	{
		/* Counting members */
		elements++;

		/* Pointing to the next node */
		h = h->next;
	}

	/* Returning figure of size_t to the caller*/
	return (elements);
}
