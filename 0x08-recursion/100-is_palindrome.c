#include "main.h"

int string_length(char *s);
int test_pal(char *s, int length, int count);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int count, length;

	count = 0;
 /* Calculating length of the string - palindrome candidate */
	length = string_length(s);

 /* incase string is empty */
	if (!(*s))
		return (1);

  /* Function to check first and last characters */
	return (test_pal(s, length, count));
}


/**
 * string_length - Calculates length of a string.
 * @s: The string
 * Return: length.
 */
int string_length(char *s)
{
	int length;

	length = 0;

	if (*(s + length))
	{
		length++;
		length = length + string_length(s + length);
	}

	return (length);
}

/**
 * test_pal - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @length: The length of s.
 * @count: The count of the string to be checked.
 *
 * Return: 0 or 1 .
 */

int test_pal(char *s, int length, int count)
{
 /* Checking if the string is NULL */
	if (s[count] == s[length / 2])
		return (1);

  /* Checking if two characters are identical */
	if (s[count] == s[length - count - 1])

  /* Continuing to check more pairs using Recursion */
		return (test_pal(s, length, count + 1));

	return (0);
}


