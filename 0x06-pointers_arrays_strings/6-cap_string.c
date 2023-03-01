#include "main.h"

/**
 * cap_string - Capitalize all words.
 * @str: String to be capitalized.
 * Return: Capitalised string.
 */

char *cap_string(char *str)
{
	int index = 0;

	for (index = 0; str[index]; index++)
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}

		if (str[index - 1] == ' ' || str[index - 1] == '\t' ||
		    str[index - 1] == '\n' || str[index - 1] == ',' ||
		    str[index - 1] == ';' || str[index - 1] == '}' ||
		    str[index - 1] == '.' || str[index - 1] == '{' ||
		    str[index - 1] == '!' || str[index - 1] == ')' ||
		    str[index - 1] == '?' || str[index - 1] == '(' ||
		    str[index - 1] == '"' || index == 0)
		{
			str[index] -= 32;
		}
	}

	return (str);
}
