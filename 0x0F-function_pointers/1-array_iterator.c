#include "function_pointers.h"

/**
 * array_iterator - Iterates through the array executing a passed function.
 * @array: array.
 * @size: The size of array.
 * @action: function pointer.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*Using "size_t" data type for comparison with @size of size_t on line 25*/
	size_t index;

	/* Incase an empty array is passed */
	if (array == NULL)
		return;

	/* Incase no function passed */
	if (action == NULL)
		return;

	/* Iterating through array until @size  times*/
	for (index = 0; index < size; index++)
	{
		/* Incrementing and Calling the function on each item.*/
		action(*array++);
	}

}
