#include "lists.h"
#include <string.h>

/**
 * add_node - Inserts node to the first head.
 * @head: A pointer to the head of the list_t list.
 * @str: Element to be added.
 * Return: New element address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	/*Declaring a new list to replace the old one*/
	list_t *new_list;
	unsigned int len = 0;
	char *str_copy;


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

	/* Storing the passed str into the new list*/
	(*new_list).str = str_copy;

	/*Increasing the length of the list*/
	(*new_list).len = len;

	(*new_list).next = *head;

	/* Updating the list*/
	*head = new_list;

	return (new_list);
}
