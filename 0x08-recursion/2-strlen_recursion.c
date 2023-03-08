#include "main.h"

/**
 * _strlen_recursion - Calculates length of a string.
 * @s: The string to be measured.
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int string_length;

	string_length = 0;

	if (*s)
	{
		string_length++;
		string_length = string_length + _strlen_recursion(s + 1);
	}
	return (string_length);
}
