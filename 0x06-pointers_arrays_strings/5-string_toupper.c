#include "main.h"

/**
 * string_toupper - alters given lower string to upper
 * @str: The string to be altered
 * Return: Altered string.
 */

char *string_toupper(char *str)
{
	int counter = 0;

	while (str[counter])
	{
		if (str[counter] >= 97 && str[counter] <= 122)
			str[counter] -= 32; /* The difference btn A(65) and a(97) */
		counter++;
	}
	return (str);
}
