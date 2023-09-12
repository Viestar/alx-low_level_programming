#include "search_algos.h"

/**
 * linear_search - finds a given item by iteration through the whole list
 * @array: List of items to be searched.
 * @size: size of the array to be searched.
 * @value: item to be searched.
 * Return: index of the item or -1 incase of failure.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	index = 0;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
