#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: Haystack - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	if (*needle == 0)
		return (haystack); /* not comparing the null */

	while (*haystack)
	{
		count = 0;

		do {
			if (needle[count + 1] == '\0')
				return (haystack);
			count++;
		} while (haystack[count] == needle[count]);
		haystack++;
	}
	return ('\0');
}
