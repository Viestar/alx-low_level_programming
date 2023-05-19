#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: list
 * @idx: position
 * @n: node to insert
 * Return: Pointer to the appended list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_list, *cont;

	cont = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		cont = cont->next;
		if (!cont)
			return (NULL);
	}

	if (cont->next == NULL)
		return (add_dnodeint_end(h, n));

	new_list = malloc(sizeof(dlistint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->prev = cont;
	new_list->next = cont->next;
	cont->next->prev = new_list;
	cont->next = new_list;

	return (new_list);
}
