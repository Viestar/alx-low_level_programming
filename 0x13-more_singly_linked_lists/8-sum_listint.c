#include "lists.h"

/**
 * sum_listint - Adds all integers in a list.
 * @head: list of integers
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Checking if a list empty*/
	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		/* Incrementing sum by the node */
		sum += (*head).n;

		/* Pointing to the next node */
		head = (*head).next;
	}
	return (sum);
}
