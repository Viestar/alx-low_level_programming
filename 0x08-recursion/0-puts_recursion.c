#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
  /* Printing a character to stdio */
		_putchar(*s);
  
  /* function calling itself to perform same thing - RECURSION. */
		_puts_recursion(s + 1);
	}

	else
 /* Printing a new line incase function can't call itself anymore. */
		_putchar('\n');
}
