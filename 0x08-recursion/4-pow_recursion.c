#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Number to be raised.
 * @y: Power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int power_answer;

	power_answer = x;

/*Base cases */
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	power_answer = power_answer * _pow_recursion(x, y - 1);

	return (power_answer);
}
