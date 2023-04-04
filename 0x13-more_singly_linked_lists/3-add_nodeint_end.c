#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end.
 * @head: Pointer to the head
 * @n: node to be added.
 * Return: pointer to new linked list or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Variable to store the new list */
	listint_t *new_list;

	/* allocating memory for the new list */
	new_list = malloc(sizeof(listint_t));

	/* Checking if any memory was allocated */
	if (new_list == NULL)
		return (NULL);
	/* */
	(*new_list).n = n;

	/* */
	(*new_list).next = NULL;

	/**/
	if (*head == NULL)
	{
		/* Incase *head was passed empty, only new node will be added */
		*head = new_list;
	}
	else
	{
		while ((*(*head)).next != NULL)
			*head = (*(*head)).next;

		/* Adding n to the end of the old list */
		(*(*head)).next = new_list;
	}
	/* */
	return (*head);
}
