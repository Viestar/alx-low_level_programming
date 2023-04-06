#include "main.h"

/**
 * set_bit - alters bit at a given index
 * @n: binary number
 * @index: index to be altered
 * Return: 0 or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int length;

	/* Calculating the maximum length of n */
	length = sizeof(unsigned long int) * 8;

	/* Checking if index out of bound */
	if (index > length)
	{
		return (-1);
	}
	/* Code from ChatGPT, more research needed */
	*n = *n ^ (1 << index);

	return (1);
}
