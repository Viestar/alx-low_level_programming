#include "function_pointers.h"

/**
 * int_index - Loops through an array searching a given integer.
 * @array: array to be searched.
 * @size: size of the array.
 * @cmp: comparison function pointer.
 * Return: First occurence or -1 for null size.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	/* Check if array size is greater than zero */
	if (size <= 0)
	return (-1);

	/* Checking if the array not empty*/
	if (array == NULL)
		return (-1);

	/* pointer check*/
	if (cmp == NULL)
		return (-1);

	/* Looping through the array to access members */
	for (index = 0; index < size; index++)
	{
		/* Calling @cmp function and checking its return*/
		if (cmp(array[index]) != 0)
			/* Returning first index */
			return (index);
	}

	return (-1);
}
