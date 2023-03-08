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
	length = string_length(s);

	if (!(*s))
		return (1);

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
	if (s[count] == s[length / 2])
		return (1);

	if (s[count] == s[length - count - 1])
		return (test_pal(s, length, count + 1));

	return (0);
}


