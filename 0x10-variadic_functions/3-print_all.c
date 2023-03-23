#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* Prototypes */
void float_function(va_list args);
void string_function(va_list args);
void char_function(va_list args);
void int_function(va_list args);


/**
 * print_all - Prints any data type, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: Elliplis for variable arguments.
 */

void print_all(const char * const format, ...)
{
	/* Using va_list data type from stdarg.h to store arguments */
	va_list arguments;

	int index_one, index_two;
	char *separator = "";

	/* An arrays with datatypes and corresponding functions*/
	f funcs[] = {
		{"c", char_function}, {"f", float_function},
		{"i", int_function}, {"s", string_function}
	};

	/* Using va_start macro from stdarg.h to initialise list of arguments*/
	va_start(arguments, format);

	index_two = index_one = 0;

	while (format && (*(format + index_two)))
	{
		index_one = 0;

		while (index_one < 4
		&& (*(format + index_two) != *(funcs[index_one].symbol)))
			index_one++;

		if (index_one < 4)
		{
			printf("%s", separator);
			funcs[index_one].print(arguments);
			separator = ", ";
		}

		index_two++;
	}

	/* Printing a line at the end of the function */
	printf("\n");

	/*
	* Undefining arguments: Each invocation of va_start() must be matched by a
	* Corresponding invocation of va_end() in the same function.
	*/
	va_end(arguments);
}



/**
 * int_function - printing only integers.
 * @args: list of arguments.
 */

void int_function(va_list args)
{
	int number;

	/*
	* Saving and printing the next INTEGER argument whenever encountered
	* Each call to va_arg() modifies @int so that the next call
	* returns the next argument.
	*/
	number = va_arg(args, int);
	printf("%d", number);
}

/**
 * float_function - printing floats only.
 * @args: arguments
 */

void float_function(va_list args)
{
	float number;

	/*
	* Saving and printing the next double argument whenever encountered
	* Each call to va_arg() modifies @int so that the next call
	* returns the next argument.
	*/
	number = va_arg(args, double);
	printf("%f", number);
}

/**
 * string_function - Prints strings only.
 * @args: A list of arguments
 */

void string_function(va_list args)
{
	char *string;

	/*
	* Saving and printing the next string argument whenever encountered
	* Each call to va_arg() modifies @int so that the next call
	* returns the next argument.
	*/
	string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}


/**
 * char_function - Prints a char.
 * @args: list of arguments.
 */
void char_function(va_list args)
{
	char character;

	/*
	* Saving and printing the next CHARACTER argument whenever encountered
	* Each call to va_arg() modifies @int so that the next call
	* returns the next argument.
	*/
	character = va_arg(args, int);
	printf("%c", character);
}
