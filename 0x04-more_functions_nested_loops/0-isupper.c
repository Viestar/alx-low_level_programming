#include "main.h"

/**
 * _isupper - checks if a chracter given is upper case
 *@c: is the character to be checked.
 * Return: 0 when not and 1 when is upper
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
