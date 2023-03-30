#include "lists.h"

/**
 * print_list - Prints all the elements of the passed list.
 * @h: The list to be printed.
 * Return: Number of number_of_nodes in the list.
 */

size_t print_list(const list_t *h)
{
	/* to save the  number of number_of_nodes */
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		/* Checking if there is any item in the list */
		if ((*h).str == NULL)
			printf("[0] (nil)\n");

		else
		/* Printing the item and */
			printf("[%d] %s\n", (*h).length, (*h).str);

		/* Incrementing number_of_nodes*/
		number_of_nodes++;

		/* Pointing the head to the next node*/
		h = (*h).next;
	}
	return (number_of_nodes);
}
