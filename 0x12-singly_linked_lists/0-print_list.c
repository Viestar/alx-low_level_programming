#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of the passed list.
 * @h: The list to be printed.
 * Return: Number of number_of_nodes in the list.
 */

size_t print_list(const list_t *h)
{
	/* to save the  number of number_of_nodes */
	size_t nodes = 0;

	while (h)
	{
		/* Checking if there is any item in the list */
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);

		/* Incrementing number_of_nodes*/
		nodes = nodes + 1;

		/* Pointing the head to the next node*/
		h = (*h).next;
	}

	return (nodes);
}
