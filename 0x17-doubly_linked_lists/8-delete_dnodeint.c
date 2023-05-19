#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position
 * @head: list
 * @index: position to delete
 * Return: 1 for success or -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *new_list;

	new_list = *head;

	if (!*head)
		return (-1);

	for (idx = 0; idx <= index; idx++)
	{
		if (new_list)
			new_list = new_list->next;
		return (-1);
	}

	if (new_list != *head)
	{
		new_list->prev->next = new_list->next;
		if (new_list->next != NULL)
			new_list->next->prev = new_list->prev;
	}
	else
	{
		*head = new_list->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	free(new_list);
	return (1);
}
