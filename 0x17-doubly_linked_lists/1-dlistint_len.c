#include "lists.h"

/**
 * dlistint_len - prints the length of the list
 * @h: list
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = (*h).next;
	}
	return (nodes);
}
