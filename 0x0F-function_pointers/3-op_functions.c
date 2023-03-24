#include "3-calc.h"


int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);


/**
 * op_add - Adds the two passed integers.
 * @a: The first number.
 * @b: The second number.
 * Return: Sum.
 */

int op_add(int a, int b)
{
	int sum;

	sum = 0;
	/* Adding the two integers*/
	sum = a + b;

	return (sum);
}


/**
 * op_sub - Subtracts b from a.
 * @a: The first number.
 * @b: The second number.
 * Return: Diffrence.
 */

int op_sub(int a, int b)
{
	signed int diff;

	diff = 0;

	/* Subtracting b from a */
	diff = a - b;

	return (diff);
}


/**
 * op_mul - Multiplies the two integers.
 * @a: The first number.
 * @b: The second number.
 * Return: Product.
 */

int op_mul(int a, int b)
{
	int product;

	product = 0;
	/* Multiplies the two integers*/
	product = a * b;

	return (product);
}


/**
 * op_div - Divides two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: result.
 */

int op_div(int a, int b)
{
	int result;

	result = 0;

	/* Checking for Zero division error */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* Divides the two integers*/
	result = a / b;

	return (result);
}


/**
 * op_mod - Calculate the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: remainder
 */

int op_mod(int a, int b)
{
	int remainder;

	remainder = 0;

	/* Checking for Zero modulus error */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* Divides the two integers and gets the remainder */
	remainder = a % b;

	return (remainder);
}
