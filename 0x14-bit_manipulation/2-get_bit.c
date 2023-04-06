#include "main.h"

/**
 * get_bit - finds a value at a given index
 * @n: binary number
 * @index: index of the value
 * Return: Value at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int length;

	/* Calculating the maximum length of n*/
	length = sizeof(unsigned long int) * 8;

	/* Checking for overflow */
	if (index > length)
	{
		return (-1);
	}
	else if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
