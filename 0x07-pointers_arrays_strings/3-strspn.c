#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: string to be checked
 * @accept: prefix to be checked.
 * Return: prefix bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix_bytes = 0;
	int index_one, index_two;

	for (index_one = 0; s[index_one]; index_one++)
	{
		for (index_two = 0; accept[index_two]; index_two++)
		{
			if (s[index_one] == accept[index_two])
			{
				prefix_bytes++;
				break;
			}
			else if (accept[index_two + 1] == '\0')
				return (prefix_bytes);
		}
	}
	return (prefix_bytes);
}
