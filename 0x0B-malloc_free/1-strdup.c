#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string and returns address of the new string.
 * @str: string.
 * Return: INULL for failure or @new_string for success
 */

char *_strdup(char *str)
{
	char *new_string; /* New string declaration */
	int index, string_length;

	index = string_length = 0;

	/* incase of an empty string */
	if (str == NULL)
		return (NULL);

	/* Calculating length of the @str for @new_string memory allocation */
	while (str[index])
	{
		string_length++;
		index++;
	}

	/* Allocating memory for the new string */
	new_string = malloc(sizeof(char) * (string_length + 1));

	if (new_string == NULL)
		return (NULL);

	/* Copying old string contents into the new string*/
	for (index = 0; str[index]; index++)
		new_string[index] = str[index];

	/*Addiing NULL at the end of the new string*/
	new_string[string_length] = '\0';

	return (new_string);
}
