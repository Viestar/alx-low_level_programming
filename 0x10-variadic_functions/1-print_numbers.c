#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print given number of arguments with a separator.
 * @separator: String to separate the numbers.
 * @n: number of arguments passed.
 * @...: illipsis allowing any number of arguments to be passed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	/* Using va_list data type from stdarg.h to store arguments */
	va_list arguments;

	/* Using va_start macro from stdarg.h to initialise list of arguments*/
	va_start(arguments, n);

	/* Looping through the list of arguments until the last @n */
	for (index = 0; index < n; index++)
	{
		/*
		* Printing the next argument whenever called
		* Each call to va_arg() modifies @int so that the next call
		* returns the next argument.
		*/
		printf("%d", va_arg(arguments, int));

		/* Printing a separator incase it was passed */
		if (separator != NULL)
			/* Making sure no separator is printed after the last argument */
			if (index != (n - 1))
				printf("%s", separator);
	}

	/* Printing a line at the end of the function */
	printf("\n");

	/*
	* Undefining arguments: Each invocation of va_start() must be matched by a
	* corresponding invocation of va_end() in the same function.
	*/
	va_end(arguments);
}
