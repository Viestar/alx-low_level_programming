#include "lists.h"

/**
 * sum_dlistint - prints sum of all the data.
 * @head: list with the data
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += (*head).n;
		head = (*head).next;
	}

	return (sum);
}
