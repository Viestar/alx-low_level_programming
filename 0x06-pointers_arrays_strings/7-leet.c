#include "main.h"

/**
 * leet - Encoding a string to 1337.
 * @str: String to be encoded.
 * Return: Encoded string.
 */


char *leet(char *str)
{
	int j, i = 0;
	char letters[8] = {'O', 'L', '.', 'E', 'A', '.', '.', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			/* checking 4 upper and lowercase */
			if (str[i] == letters[j] || str[i] - 32 == letters[j])
			{
				str[i] = j + '0';
			}
		}

		i++;
	}

	return (str);
}
