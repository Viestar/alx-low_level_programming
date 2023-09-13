#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search function.
 * @array: Pointer to the first element of the array.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * @value: The value to search for.
 * Return: The index of the value in the array or (-1) if not found.
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int mid, i;

	if (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, low, mid, value));
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted
 * array using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value in the array or (-1) if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
