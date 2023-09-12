#include "search_algos.h"

int search_recursion(int *array, size_t top, size_t index, int value);

/**
 * binary_search - finds a given item by divide and conquer.
 * @array: List of items to be searched.
 * @size: size of the array to be searched.
 * @value: item to be searched.
 * Return: index of the item or -1 incase of failure.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t top = size - 1;
	size_t index = 0;

	if (!array)
		return (-1);
	return (search_recursion(array, top, index, value));
}

/**
 * search_recursion - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @top: number of elements in array
 * @index: keeps track of the index
 * @value: the value to search for
 * Return: if value is not present or NULL return -1
 */
int search_recursion(int *array, size_t top, size_t index, int value)
{
	int mid_index;

	size_t local_index = index;

	if (top < index)
		return (-1);
	printf("Searching in array: ");

	for (; local_index <= top; local_index++)
	{
		if (local_index == top)
		{
			printf("%d", array[local_index]);
			break;
		}
		printf("%d, ", array[local_index]);
	}
	printf("\n");

	mid_index = (index + (top - index)) / 2;
	if (array[mid_index] == value)
		return (mid_index);
	else if (array[mid_index] > value)
		return (search_recursion(array, index, mid_index - 1, value));
	return (search_recursion(array, mid_index + 1, top, value));
}
