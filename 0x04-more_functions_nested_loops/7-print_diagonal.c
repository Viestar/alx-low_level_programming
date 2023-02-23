#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of backlashes to be printed
 * Return: Void
 */

void print_diagonal(int n)
{
int i = 0;
int j;

while (i < n && n > 0)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
