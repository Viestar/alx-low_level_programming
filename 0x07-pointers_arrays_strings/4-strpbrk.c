#include "main.h"

/**
 * _strpbrk - searches a string for the first occurence.
 * @s: string to be checked
 * @accept: prefix to be checked.
 * Return: string s
*/

char *_strpbrk(char *s, char *accept)
{
	int index_two;

	while (*s)
	{
		for (index_two = 0; accept[index_two]; index_two++)
		{
			if (*s == accept[index_two])
			{
				return (s);
			}
		}
		++s;
	}
	return ('\0');
}
