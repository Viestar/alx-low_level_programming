#include "lists.h"

/**
 * pop_listint - Deletes head node
 * @head: list
 * Return: node value or 0
 */

int pop_listint(listint_t **head)
{
	int node_value;
	listint_t *new_list;

	if (*head == NULL)
		return (0);

	new_list = *head;
	node_value = (*(*head)).n;
	*head = (*(*head)).next;

	free(new_list);

	return (node_value);
}
