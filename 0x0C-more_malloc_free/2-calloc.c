#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocating memory_array for an arra
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: Pointer to the allocated memory_array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory_array; /* Array to be created*/
	unsigned int index;

	/* Checking if any memory should be created */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocating memory for the elements in the array */
	memory_array = malloc(size * nmemb);

	/* Checking if any memory was created */
	if (memory_array == NULL)
		return (NULL);

	/* Initialising the memory*/
	for (index = 0; index < (size * nmemb); index++)
		memory_array[index] = '\0';

	return (memory_array);
}
