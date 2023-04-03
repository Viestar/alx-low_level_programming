#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: list to be freed
 * Return: Void
*/

void free_listint(listint_t *head)
{
    listint_t *empty_list;

    while (head)
    {
        /* */
        empty_list = (*head).next;

        /* */
        free(head);

        /* */
        head = empty_list;
    }

}
