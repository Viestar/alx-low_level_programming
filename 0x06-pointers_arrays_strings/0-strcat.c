#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: string to be appended to @dest
 * @dest: string to append to.
 * Return: Appended string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int length = 0;

	for (index = 0; dest[index]; index++)
		length++; /* Getting length of desk to determine append start point */

	for (index = 0; src[index]; index++, length++)
		dest[length] = src[index];

	return (dest);
}
