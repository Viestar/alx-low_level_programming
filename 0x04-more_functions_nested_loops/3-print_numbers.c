#include "main.h"

/**
 * print_numbers - prints numbers  0 to 9
 * Return: Void
 */

void print_numbers(void)
{
char x = 0;

while (x <= 9)
{
_putchar(x + '0');
x++;
}
_putchar('\n');
}
