#include "main.h"

/**
 * times_table - Prints time table
 * Return: Void
 */

void times_table(void)
{
int col, row, multiple, ones, tens;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
multiple = col * row;
tens = multiple / 10;
ones = multiple % 10;
if (col == 0)
{
_putchar('0');
}
else if (multiple < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
