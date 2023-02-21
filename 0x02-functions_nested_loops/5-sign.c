#include "main.h"

/**
 *print_sign -- Check whether an argument passed is an alphabet.
 *@n: Argument to be passed
 *Return: 1 when positive, -1 when negative &  0 when 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
