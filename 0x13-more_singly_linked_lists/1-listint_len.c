#include "lists.h"

/**
 * listint_len - Prints number of elements
 * @h: pointer to the head of the list
*/

size_t listint_len(const listint_t *h)
{
    /* Variable of size_t to store number of elements */
    size_t elements = 0;

    while (h)
    {
        /* Calculating number of elements */
        elements++;

        /* Pointing to the next head */
        h = (*h).next;

    }
    return (elements);
}
