#include "main.h"

/**
 * clear_bit - Sets bit at given index to zero
 * @n: binary number
 * @index: index to be set to zero
 * Return: 1 for success or 0 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int length;

	/* Calculating the maximum length of n */
	length = sizeof(unsigned long int) * 8;

	if (index > length)
	{
		return (-1);
	}
	/*Invertor */
	*n = *n & ~(1 << index);

	return (1);
}
