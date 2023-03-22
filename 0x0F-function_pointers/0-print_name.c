#include "function_pointers.h"

/**
 * print_name - Outputs a name passed using a function pointer passed too.
 * @name: name.
 * @f: function pointer that prints its argument.
 */

void print_name(char *name, void (*f)(char *))
{

	/* Incase an empty string or no @name is passed */
	if (name == NULL)
		return;

	/* Incase NULL for @f */
	if (f == NULL)
		return;

	/* Using the pointer @f to CALL its function to print our variable @name */
	f(name);
}
