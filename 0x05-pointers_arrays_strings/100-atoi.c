#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string up for conversion.
 *Return: the converted integer.
 */

int _atoi(char *s)
{
unsigned int unsign = 0;
int sign = 1;

do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
unsign = (unsign * 10) + (*s - '0');
else if (unsign > 0)
break;
} while (*s++);
return (unsign *sign);
}
