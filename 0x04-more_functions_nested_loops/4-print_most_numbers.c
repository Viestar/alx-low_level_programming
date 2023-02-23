#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 except 2, 3
 * Return: Void
 */

void print_most_numbers(void)
{
int x = 0;

while (a <= 9)
{
if (x != 2 && x != 4)
{
_putchar(x + '0');
}
x++;
}
_putchar('\n');
}
