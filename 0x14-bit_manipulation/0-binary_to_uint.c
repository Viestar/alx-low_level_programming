#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned integer
 * @b: binary number to be converted
 * Return: converted signed integer.
 */

unsigned int binary_to_uint(const char *b)
{
	/* Variable to store the converted integer */
	unsigned int number = 0;
	unsigned int index = 0;

	/* Incase b contains nothing */
	if (b[index] == '\0')
	{
		return (0);
	}
	else
	{
		/* Iterating through b accessing its elements for conversion */
		for (; b[index]; index++)
		{
			if (b[index] == '1' || b[index] == '0')
			{
				/* Multiplying each by its base 2 to turn it to base 10 */
				number = number << 1;
				number = number + (b[index] - '0');
			}
			else
			{
				/* Returning o incase non 1 0r 0 is passed */
				return (0);
			}
		}
		return (number);
	}
}
