#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: Factorial for success, 1 - if n == 1 and -1 if n < 0
 */
int factorial(int n)
{
	int the_factorial;

	the_factorial = n;
	/*Base Case*/
	if (n >= 0 && n <= 1)
		return (1);
	/*Base Case*/
	else if (n < 0)
		return (-1);

	the_factorial = the_factorial * factorial(n - 1);
	return (the_factorial);
}
