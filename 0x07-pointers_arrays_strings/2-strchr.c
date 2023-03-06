#include "main.h"

/**
 * *_strchr - looks for character c from string s
 * @s: String to search through
 * @c: character to look for
 * Return: pointer to dest.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
