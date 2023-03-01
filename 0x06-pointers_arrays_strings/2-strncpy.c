#include "main.h"

/**
 * _strncpy - Copies n given number of charcters from src to dest
 * @dest: String to append.
 * @src: String to append from.
 * @n: number of characters to append source with.
 * Return: dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int length = 0;


	while (src[index]) /* Finding the length of the string */
	{
		length++;
		index++;
	}
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = length; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
