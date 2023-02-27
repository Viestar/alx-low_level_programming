#include "main.h"

/**
 * *_strcpy -  string copier
 * @dest: string to copy to
 * @src: string to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int index = -1;

do {
index++;
dest[index] = src[index];
} while (src[index] != '\0');

return (dest);
}
