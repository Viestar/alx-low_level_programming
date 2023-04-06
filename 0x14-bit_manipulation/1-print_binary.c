#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: integer to be represented
 */

void print_binary(unsigned long int n)
{
	/* Since binary representation for 0 and 1 is the same */
	if (n == '0' || n == '1')
	{
		_putchar(n);
	}

	if (n > 1)
	{
		/* Right shift as a dividing mechanism and using recursion */
		print_binary(n >> 1);
	}
	/* Outputting recursion results one by one */
	_putchar((n & 1) + '0');
}
