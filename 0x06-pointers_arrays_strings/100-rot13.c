#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: String to be encoded.
 * Return: Encoded string.
 */

char *rot13(char *str)
{
	int index = 0;

	while (str[index])
	{

		while ((str[index] <= 'M' || str[index] <= 'm')
			&& (str[index] >= 'A' || str[index] >= 'a'))
		{
			str[index] += 13;
			index++;
		}

		if ((str[index] >= 'N' || str[index] >= 'n')
			&& (str[index] <= 'Z' || str[index] <= 'z'))
		{
			str[index] -= 13;
		}
		else
			index++;
		index++;
	}
	return (str);
}
