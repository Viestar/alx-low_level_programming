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
	listint_t *old_one;

	/* allocating memory for the new list */
	new_list = malloc(sizeof(listint_t));

	/* Checking if any memory was allocated */
	if (new_list == NULL)
		return (NULL);

	/* Adding node n to new the new list */
	(*new_list).n = n;

	/* Pointing the next node to NULL */
	(*new_list).next = NULL;

	/*incase the passed list was empty */
	if (*head == NULL)
	{
		/* Then new_list will just replace the older one */
		*head = new_list;
	}
	else
	{
		/* Cloning the list for ammendments*/
		old_one = *head;

		/* Looping through the list until the node */
		while ((*old_one).next != NULL)
			old_one = (*old_one).next;

		/* Adding n by pointing the last node to the new list */
		(*old_one).next = new_list;
	}
	/* */
	return (*head);
}
