#include "main.h"


/**
 *print_times_table - Prints times table of a given number.
 *@n: Given n umber for the times table
 *Return: Void
 */

void print_times_table(int n)
{
int i = 0;
int j = 0;
int multiple = i * j;

if (n >= 0 && n <= 15)
{
while (i >= 0 && i <= n)
{
while (j >= 0 && j <= n)
{
_putchar(multiple);
_putchar('\n');
j++;
}
i++;
}
}
}
