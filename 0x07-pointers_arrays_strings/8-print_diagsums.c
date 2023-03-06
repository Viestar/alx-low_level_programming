#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals from a given a.
 * @a: Array given.
 * @size: Size.
 */

void print_diagsums(int *a, int size)
{
	int count, first_sum, second_sum;

	count = first_sum = second_sum = 0;

	while (count < size)
	{
		first_sum += a[count];
		a += size;
		count++;
	}

	a -= size;

	for (count = 0; count < size; count++)
	{
		second_sum += a[count];
		a -= size;
	}
	printf("%d, %d\n", first_sum, second_sum);
}
