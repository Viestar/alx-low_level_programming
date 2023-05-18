#include "lists.h"

/**
 * add_dnodeint - inserts a node at the beginning
 * @n: node to be inserted
 * @head: list
 * Return: pointer to the new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* To save the new appended list */
	dlistint_t *new_list;

	/* Allocating memory for the new list */
	new_list = malloc(sizeof(dlistint_t));

	if (!new_list)
		return (NULL);

	/* Loading at the beginning */
	new_list->n = n;

	/* pointing first item to Null */
	new_list->prev = NULL;

	/* Appending old list to the new list */
	new_list->next = *head;

	/* Connecting head previous node to the new list */
	if (*head != NULL)
		(*head)->prev = new_list;

	*head = new_list;
	return (new_list);
}
