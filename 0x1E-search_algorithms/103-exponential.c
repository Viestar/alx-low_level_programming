#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_exp - Searches for a value i
 * n a sorted array using Binary search.
 * @array: Pointer to the first element of the array.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * @value: The value to search for.
 * Return: The index of the value in the array or (-1) if not found.
 */
int binary_search_exp(int *array, int low, int high, int value)
{
	int i;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a
 * sorted array using Exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value in the array or (-1) if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	int high, low, bound;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	bound = 1;
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < (int)size) ? bound : (int)size - 1;
	printf("Value found between indexes[%d] and [%d]\n", low, high);
	return (binary_search_exp(array, low, high, value));
}
