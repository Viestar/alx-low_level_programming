#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * Return: Array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_copier, *temp_memory;
	unsigned int index;

	/* Checking if both memories are equal */
	if (new_size == old_size)
		return (ptr);
	/* Checking if ptr is empty to only use newsize*/
	if (ptr == NULL)
	{
		/* Allocating newsize incase ptr passed is empty */
		memory = malloc(new_size);

		/* Checking to see if memory was created*/
		if (memory == NULL)
			return (NULL);
		return (memory);
	}
	/* Checking if any memory will created, then to free ptr if it existed */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Copying contents of ptr and Allocating size memory */
	ptr_copier = ptr;
	memory = malloc(sizeof(*ptr_copier) * new_size);
	/* Checking if any memory has been created */
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Copying memory */
	temp_memory = memory;
	for (index = 0; index < old_size && index < new_size; index++)
		temp_memory[index] = *ptr_copier++;
	free(ptr);
	return (memory);
}
