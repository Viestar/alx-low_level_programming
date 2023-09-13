#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Find a given item from a list by jumping a block & linear
 * @array: List to be searched
 * @size: length of the array
 * @value: item to be searched
 * Return: index of an item, or -1 on failure.
 */
int jump_search(int *array, size_t size, int value)
{
	int block;
	int index;
	int index_two;

	if (array == NULL)
		return (-1);

	block = sqrt(size);
	index = 0;

	while (array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += block;

		/* Check if we've reached the end of the array */
		if (index >= (int)size)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", (index - block), index);

	/* Perform a linear search within the block */
	for (index_two = (index - block);
		 index_two <= index && index_two < (int)size; index_two++)
	{
		printf("Value checked array[%d] = [%d]\n", index_two, array[index_two]);

		if (array[index_two] == value)
		{
			printf("Found %d at index : %d\n", array[index_two], index_two);
			return (index_two);
		}
	}

	return (-1);
}
