#include "search_algos.h"

/**
 * binary_search - finds a given item by divide and conquer.
 * @array: List of items to be searched.
 * @size: size of the array to be searched.
 * @value: item to be searched.
 * Return: Index of the item or -1 in case of failure.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t below = 0;
	size_t index, top = size - 1;
	size_t middle;

	if (array == NULL)
		return (-1);

	while (below <= top)
	{
		middle = (below + top) / 2;

		printf("Searching in array: ");
		for (index = below; index <= top; index++)
		{
			printf("%d", array[index]);
			if (index < top)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			below = middle + 1;
		else
			top = middle - 1;
	}

	return (-1); /* Value not found */
}
