#include "main.h"
#include <stdlib.h>

/* Prototype to calculate length of both strings and add them together */
int calculate_length(char *s1, char *s2);

/**
 * str_concat - Adds two strings at a new location.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: pointer to @bonded_string or NULL for failure
 */

char *str_concat(char *s1, char *s2)
{
	char *bonded_string; /* string container to user for bonding */
	int index, index_s1, double_index, double_length;

	index = index_s1 = double_length  = 0;

	double_length = calculate_length(s1, s2);

	/* Setting Null to an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Setting Null to an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Allocating memory for the @bonded_string */
	bonded_string = malloc(sizeof(char) * double_length);

	if (bonded_string == NULL)
		return (NULL);

	/* Populating @bonde_string with @s1 contents */
	for (index = 0; s1[index]; index++)
		bonded_string[double_index++] = s1[index];

	/* Populating @bonde_string with @s1 contents */
	for (index = 0; s2[index]; index++)
		bonded_string[double_index++] = s2[index];

	return (bonded_string);
}

/**
 * calculate_length - calculates length of two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: length of both strings
 */

int calculate_length(char *s1, char *s2)
{
	int index_s1, index, double_length;

	index_s1 = index = double_length = 0;

	/* Calculating the length of the first string */
	while (s1[index_s1])
	{	double_length++;
		index_s1++;
	}

	/* Calculating length of second string and incrementing @double_length */
	while (s2[index])
	{	double_length++;
		index++;
	}
	return (double_length);
}
