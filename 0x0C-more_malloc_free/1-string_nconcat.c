#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Adds n bytes of s2 to s1 at a new location
 * @s1: The first string.
 * @s2: The second string.
 * @n: maximum bytes to be added
 * Return: Memory location or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *bonded_string; /* Declaring container for the two strings */
	unsigned int length_s2, total_length, length_s1, index, count;

	length_s2 = length_s1 = index = total_length = count = 0;
	if (s1 == NULL) /* Checking if s1 is empty */
		s1 = "";

	if (s2 == NULL) /* Checking if s2 is empty */
		s2 = "";

	/* Looping through s2 to catch its length */
	while (s2[index] && index <= n)
	{
		length_s1++;
		index++;
	}
	/* looping through s1 to get full size of new string*/
	for (index = 0; s1[index]; index++)
		length_s2++;

	total_length = length_s2 + length_s1;

	/* Allocating memory for the new string */
	bonded_string = malloc(sizeof(char) * (total_length + 1));

	/* Checking if any memory was created */
	if (bonded_string == NULL)
		return (NULL);

	/* Copying contents of s1 into the new string*/
	for (index = 0; s1[index] != '\0'; index++)
		bonded_string[index] = s1[index];
	/* Copying contents of s2 */
	for (count = 0; s2[count] != '\0'; count++, index++)
		bonded_string[index] = s2[count];
	/* Adding Null to the end of the string */
	bonded_string[total_length] = '\0';

	return (bonded_string);
}
