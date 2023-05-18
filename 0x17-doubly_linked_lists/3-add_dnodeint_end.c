#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end of the list
 * @head: list to be appended
 * @n: node to add
 * Return: A pointer to the new_list node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list, *temp;

	/* Allocating memory for the new_list */
	new_list = malloc(sizeof(dlistint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_list;
		new_list->prev = temp;
	}
	else
	{
		new_list->prev = NULL;
		*head = new_list;
		return (new_list);
	}

	return (new_list);
}
