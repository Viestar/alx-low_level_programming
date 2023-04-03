#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning.
 * @head: Pointer to the head
 * @n: node to be added.
 * Return: pointer to new linked list or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    /* Variable to store the new list */
    listint_t *new_list;

    /* allocating memory for the new list */
    new_list =  malloc(sizeof(listint_t));

    /* Checking if any memory was allocated */
    if (new_list == NULL)
        return (NULL);

    /* */
    (*new_list).n = n;

    /**/
    (*new_list).next = *head;

    /**/
    *head = new_list;

    /**/
    return (new_list);

}
