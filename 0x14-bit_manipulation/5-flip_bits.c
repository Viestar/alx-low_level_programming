#include "main.h"

/**
 * flip_bits - Checks how many bits required to flip btn two numbers
 * @n: First number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Variable to store result of the XOR */
	unsigned long int n_xor_m;

	/*Variable to store number of bits */
	unsigned int bits_flipped = 0;

	/* Running XOR on n and m to identify and remove identical bits */
	n_xor_m = n ^ m;

	/* Iterating through n_xor_m counting bits that are one */
	while (n_xor_m != 0)
	{
		bits_flipped = bits_flipped + (n_xor_m & 1);

		/* Shifting 1 bit right to discard the L-S-B for further comparisons */
		n_xor_m = n_xor_m >> 1;
	}

	return (bits_flipped);
}
