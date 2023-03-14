#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an cArray and initializes it with a given character.
 * @size: The size of the cArray to be initialized.
 * @c: The specific char to intialize the cArray with.
 * Return: NULL for failure or size less than 1 or return  cArray
 */

char *create_array(unsigned int size, char c)
{
	char *cArray; /* Array declaration */
	unsigned int index; /* since size is unsigned too*/

	/* Checking if size greater than zero */
	if (size == 0)
		return (NULL);

	/* Creating the array */
	cArray = malloc(sizeof(char) * size);

	/* Checking for failure */
	if (cArray == NULL)
		return (NULL);

	/* Looping until size to populate the array */
	for (index = 0; index < size; index++)
		/* Initialising the array with @c */
		cArray[index] = c;

	return (cArray);
}
