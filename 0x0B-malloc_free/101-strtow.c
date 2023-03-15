#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int word_counter(char *str);


/**
 * strtow - Splits all no_of_words a string.
 * @str: string for spliting.
 * Return: array_of_strings or NULL.
 */

char **strtow(char *str)
{
	char **array_of_strings; /* Declaring the array to store the strings */
	int index = 0, no_of_words, word, characters, chars;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Counting the numbers in the string */
	no_of_words = word_counter(str);

	/* Checking if a string is empty */
	if (no_of_words == 0)
		return (NULL);

	/* Allocating size for the array depending on the number of words - cols */
	array_of_strings = malloc(sizeof(char *) * (no_of_words + 1));

	/* Checking if any words are actually passed*/
	if (array_of_strings == NULL)
		return (NULL);

	/* Looping to calculate size for each word for the 2nd dimension */
	for (word = 0; word < no_of_words; word++)
	{
		while (str[index] == ' ')
			index++;

		/* Calculating size of each word */
		characters = word_len(str + index);

		/* Allocating size for the second dimension of the array - rows */
		array_of_strings[word] = malloc(sizeof(char) * (characters + 1));

		/* Freeing the size allocated for 2D array in case no characters */
		if (array_of_strings[word] == NULL)
		{
			for (; word >= 0; word--)
				free(array_of_strings[word]);

			free(array_of_strings);
			return (NULL);
		}

		/* Looping through each word adding chars to the 2nd dimension -rows */
		for (chars = 0; chars < characters; chars++)
			array_of_strings[word][chars] = str[index++];

		/* Adding a null at the end every word */
		array_of_strings[word][chars] = '\0';
	}
	/* Setting the last item to be NULL*/
	array_of_strings[word] = NULL;

	/* Created array of strings*/
	return (array_of_strings);
}


/**
 * word_len - Calculate the length of the each word.
 * @str: String containing no_of_words.
 * Return: word_length
 */

int word_len(char *str)
{
	int index, word_length;

	index = word_length = 0;

	/* Looping through the string until a space to mark a word */
	while (*(str + index) && *(str + index) != ' ')
	{
		word_length++;
		index++;
	}
	return (word_length);
}

/**
 * word_counter - Counts the number of no_of_words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of no_of_words contained within str.
 */

int word_counter(char *str)
{
	int index, word_length, no_of_words;

	index = word_length = no_of_words = 0;

	/* Calculating length of the word */
	for (index = 0; *(str + index); index++)
		word_length++;

	/* Looping until "any space" calculating number of words */
	for (index = 0; index < word_length; index++)
	{
		if (*(str + index) != ' ')
		{
			no_of_words++;

			/* incrementing index by the length of the previous word */
			index += word_len(str + index);
		}
	}

	return (no_of_words);
}
