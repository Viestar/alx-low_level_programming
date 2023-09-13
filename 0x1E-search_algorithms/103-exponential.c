#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary search.
 * @array: Pointer to the first element of the array.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * @value: The value to search for.
 * Return: The index of the value in the array or -1 if not found.
 */
int binary_search_exp(int *array, int low, int high, int value)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value in the array or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	int high;

	int bound = 1;
	int low = bound / 2;

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return 0;
	}

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	high = (bound < (int)size) ? bound : (int)size - 1;

	return (binary_search_exp(array, low, high, value));
}
