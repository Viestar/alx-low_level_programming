#include "main.h"
#include <stdlib.h> /* Library that has malloc */

/**
 * malloc_checked - Allocates memory.
 * @b: number of bytes to be allocated
 * Return: Allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	/* Allocating memory with unidentified datatype */
	void *memory = malloc(b);

	/* In case no memory has been created */
	if (memory == NULL)
		/* using the exit() to erase anything and stop the program */
		exit(98);

	/* Return the created memory */
	return (memory);
}
