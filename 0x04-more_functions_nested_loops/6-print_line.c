#include "main.h"

/**
 * print_line - prints underscore n times
 * @n: variable
 * Return: 0
 */

void print_line(int n)
{
int i = 0;

if (n == 0)
{
_putchar('\n');
}
else
{
while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
