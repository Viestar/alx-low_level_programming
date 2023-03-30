#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds new_list node to the end
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: Address of the new_list element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_copy;
	int len;
	list_t *new_list, *last;

	/* Allocating space for the new_list list*/
	new_list = malloc(sizeof(list_t));

	/* Checking if space was allocated */
	if (new_list == NULL)
		return (NULL);

	/* Copying the string */
	str_copy = strdup(str);

	/* Checking if a string empty and therefore free malloc'd space */
	if (str_copy == NULL)
	{
		free(new_list);
		return (NULL);
	}

	while (str[len])
		len++;

	(*new_list).str = str_copy;
	/* Updating length f the list*/
	(*new_list).len = len;
	/* Pointing last head to NULL */
	(*new_list).next = NULL;

	if (*head == NULL)
		*head = new_list;
	else
	{
		last = *head;
		while ((*last).next != NULL)
			last = (*last).next;
		(*last).next = new_list;
	}
	return (*head);
}
