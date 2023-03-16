#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array from a given range of integers.
 * @min: starting point.
 * @max: ending point.
 * Return: Pointer to the array or NULL.
 */

int *array_range(int min, int max)
{
	int *array; /* Container for the integers */
	int index, array_length;

	array_length = index = 0;

	/* Checking the base case*/
	if (min > max)
		return (NULL);

	/**
	* Calculating the length of the array
	* for (index = min; index <= max; index++)
	*	array_length++;
	*/

	array_length = max - min + 1;

	/* Allocating required memory for the array*/
	array = malloc(sizeof(int) * array_length);

	/* Checking if any memory was created */
	if (array == NULL)
		return (NULL);

	/* Populating the array with items between min and max */
	while (index < array_length)
	{
		array[index] = min++;
		index++;
	}
	/* Returning the array of integers */
	return (array);
}
