#include "main.h"

/**
 * _isdigit - Checks for digits
 *@c: is the character to be checked.
 * Return: 0 when not and 1 when is upper
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
