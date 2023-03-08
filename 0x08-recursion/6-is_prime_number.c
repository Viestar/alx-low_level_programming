#include "main.h"

int divisible(int number, int divisor);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: 0 or -1
 */

int is_prime_number(int n)
{
	int divisor;

	divisor = 2;

/*Base Case */
	if (n <= 1)
		return (0);
/*Base Case */
	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, divisor));
}

/**
 *divisible - Checks if a number is divisible.
 * @number: The number to be checked.
 * @divisor: The divisor.
 * Return: 0 or -1
*/

int divisible(int number, int divisor)
{
/*Base Case */
	if (number % divisor == 0)
		return (0);
/*Base Case */
	if (divisor == number / 2)
		return (1);

	return (divisible(number, divisor + 1));
}



