#include "main.h"

/**
 * _memset - Fills the n bytes of memory at s with b
 * @s: Address to be filled
 * @n: number of bytes
 * @b: What is to fill with.
 * Return: Pointer filled.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}
