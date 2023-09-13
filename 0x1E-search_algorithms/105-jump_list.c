#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list using Jump search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 * Return: A pointer to the first node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_size, jump_index;
	listint_t *current, *previous_jump;

	if (list == NULL || size == 0)
		return (NULL);

	step_size = sqrt(size);
	current = list;
	previous_jump = NULL;

	while (current->index < size && current->n < value)
	{
		previous_jump = current;
		jump_index = current->index + step_size;

		while (current->index < jump_index && current->index < size)
		{
			if (current->n == value)
				return (current);

			printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
			current = current->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   previous_jump->index, current->index);

	while (previous_jump->index < current->index)
	{
		if (previous_jump->n == value)
			return (previous_jump);

		printf("Value checked at index [%ld] = [%d]\n",
			   previous_jump->index, previous_jump->n);
		previous_jump = previous_jump->next;
	}

	return (NULL);
}
