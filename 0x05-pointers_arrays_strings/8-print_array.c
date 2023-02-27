#include "main.h"
#include <stdio.h>

/**
 * print_array - print passed elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
int index = 0;
for (index = 0; index <= (n - 1); index++)
{
printf("%d", a[index]);
if (index < (n - 1))
{
printf(", ");
}
}
printf("\n");
}
