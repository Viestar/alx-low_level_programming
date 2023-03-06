#include "main.h"

/**
 * *_strchr - looks for character c from string s
 * @s: String to search through
 * @c: character to look for
 * Return: pointer to dest.
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	return ('\0');
}
