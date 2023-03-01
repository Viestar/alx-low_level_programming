#include "main.h"

/**
 * reverse_array - Reverses the array.
 * @a: Array of integers to be reversed.
 * @n: Number of elements in the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = 0; index < (n / 2); index++)
	{
		temp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = temp;
	}
}
