#include "main.h"

/**
 * print_square - Print hashes a given n times
 * @n: times a sqaure is printed
 * Return: Void
 */

void print_square(int n)
{
int i = 0,
int j;

while (i < n && n > 0)
{
j = 0;
while (j < n)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
