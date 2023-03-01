#include "main.h"

/**
 * string_toupper - alters given lower string to upper
 * @str: The string to be altered
 * Return: Altered string.
 */

char *string_toupper(char *str)
{
	int index;
	int len = 0;

	while (str[index])
	{
		len++; /* Length of the string */
		index++;
	}

	for (index = 0; index <= len; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32; /* The difference btn A(65) and a(97) */
	}
	return (str);
}
