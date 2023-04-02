#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: String to be printed.
 */

void _print_rev_recursion(char *s)
{
 /* Cheking to see if s is not NULL */
	if (*s)
	{
  /* Function calling its self with changing arguments - Recursion. */
		_print_rev_recursion(s + 1);

  /* Printing after recursing suchthat values get printed using LIFO */
		_putchar(*s);
	}
}
