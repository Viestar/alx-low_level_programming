#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h> /* has the macros like va_start */

/*
 * File: variadic_functions.h
 * Desc: Prototypes and structs for the variadic functions tasks.
 */


/**
 * struct printff - A new struct type defining a printff.
 * @symbol: Datatype symbol.
 * @print: function pointer.
 */

typedef struct printff
{
	char *symbol;
	void (*print)(va_list args);

} f;


/* Prototypes */
void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
