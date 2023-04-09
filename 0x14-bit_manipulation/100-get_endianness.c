#include "main.h"

/**
 * get_endianness - find big and little endian
 * Return: 0 for big endian and -1 for little endian.
 */

int get_endianness(void)
{
	char *bigLittle;
	int number;

	number = 1;
	/* Checking for endian */
	bigLittle = (char *)&number;

	if (*bigLittle != 1)
		return (0);

	return (1);
}
