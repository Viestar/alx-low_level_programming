#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: Source
 * @dest: Destination
 * @n: Number of bytes to be copied.
 * Return: destination pointer.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
