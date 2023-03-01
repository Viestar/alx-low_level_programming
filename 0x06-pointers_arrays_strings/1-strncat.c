#include "main.h"

/**
 * *_strncat - concatenates two strings to a given number characters
 * @src: string to be appended to @dest
 * @dest: string to append to.
 * @n: number of characters to append to @dest
 * Return: Appended string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0; /* for loop counts */
int length = 0;

for (index = 0; dest[index]; index++)
length++; /* Getting length of desk to determine append start point */
for (index = 0; src[index] && index < n; index++, length++)
dest[length] = src[index];
return (dest);
}
