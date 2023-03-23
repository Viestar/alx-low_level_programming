#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its arguments.
 * @n: last required argument passed.
 * @...: illipsis allowing any number of arguments to be passed.
 * Return: sum or 0 incase no parameters were passed
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int index, sum;
	/* Using va_list data type from stdarg.h to store arguments */
	va_list arguments;

	index = sum = 0;

	/* returning 0 incase no required arguments are passed */
	if (n == 0)
		return (0);

	/* Using va_start macro from stdarg.h to initialise list of arguments*/
	va_start(arguments, n);

	/* Looping through the list of arguments until the last @n*/
	for (index = 0; index < n; index++)
		/*
		* adding all arguments to the sum
		* Each call to va_arg() modifies @int so that the next call
		* returns the next argument.
		*/
		sum = sum + va_arg(arguments, int);

	/*
	* Undefining arguments: Each invocation of va_start() must be matched by a
	* corresponding invocation of va_end() in the same function.
	*/
	va_end(arguments);

	/* Returning sum back to the caller */
	return (sum);
}
