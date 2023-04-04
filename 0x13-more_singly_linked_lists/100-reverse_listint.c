#include "lists.h"

/**
 * reverse_listint - function that reverses a string
 * @head: String to be reversed
 * Return: reversed string
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *rev_list;
	listint_t *temp_list;

	/* Checking for Null */
	if (*head == NULL || head == NULL)
		return (NULL);
	temp_list = NULL;

	/* Looping to reverse the list */
	while ((*(*head)).next != NULL)
	{
		rev_list = (*(*head)).next;
		(*(*head)).next = temp_list;
		temp_list = *head;
		*head = rev_list;
	}
	(*(*head)).next = temp_list;

	/* Returning the reversed list*/
	return (*head);
}
