#include "lists.h"

/**
 * print_listint - Prints all elements
 * @h: linked list to be printed
 * Return: number of nodes.
*/

size_t print_listint(const listint_t *h)
{
    /* Declaring variable to store the number of nodes */
    size_t nodes;

    nodes = 0;

    while (h)
    {
        /* Calculating the number of elements */
        nodes++;

        /* Printing the elements*/
        printf("%d\n", (*h).n);

        /* Pointing to the next head */
        h = (*h).next;
    }
    return (nodes);
}
