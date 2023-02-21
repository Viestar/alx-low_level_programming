#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - outputs numbers to 98
 * @x: argument passed
 * Return: void
 */
void print_to_98(int x)
{
if (x < 98)
{
while (x < 98)
{
printf("%d, ", x);
x++;
}
}
else if (x > 98)
{
while (x > 98)
{
printf("%d, ", x);
x--;
}
}
printf("98\n");
}
