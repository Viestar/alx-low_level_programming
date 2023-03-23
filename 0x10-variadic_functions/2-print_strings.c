#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print given number of arguments with a separator.
 * @separator: String to separate the strings.
 * @n: number of arguments passed.
 * @...: illipsis allowing any number of arguments to be passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string; /* to store a string */
	unsigned int index;
	/* Using va_list data type from stdarg.h to store arguments */
	va_list arguments;

	/* Using va_start macro from stdarg.h to initialise list of arguments*/
	va_start(arguments, n);

	/* Looping through the list of arguments until the last @n */
	for (index = 0; index < n; index++)
	{
		/*
		* Saving the next argument whenever called
		* Each call to va_arg() modifies @int so that the next call
		* returns the next argument.
		*/
		string = va_arg(arguments, char *);

		/* printing (nil) in case an empty string is encountered */
		if (string == NULL)
			printf("nil");

		/* Printing the string */
		printf("%s", string);

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
	* Corresponding invocation of va_end() in the same function.
	*/
	va_end(arguments);
}
