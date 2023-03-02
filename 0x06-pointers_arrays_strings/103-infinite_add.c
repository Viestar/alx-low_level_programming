#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: first number to be added.
 * @n2: second number to be added.
 * @r: stores the result.
 * @size_r: The buffer size.
 *
 * Return: returns added value for success and 0 if unsuccessful.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count, count_2, number, length_n1 = 0, length_n2 = 0, number_2 = 0;

	for (count = 0; *(n1 + count); count++)
		length_n1++;
	for (count = 0; *(n2 + count); count++)
		length_n2++;
	if (size_r <= length_n1 + 1 || size_r <= length_n2 + 1)
		return (0);
	n1 += length_n1 - 1;
	n2 += length_n2 - 1;
	*(r + size_r) = '\0';
	count_2 = --size_r;

	for (; *n1 && *n2; n1--, n2--, count_2--)
	{	number = (*n1 - '0') + (*n2 - '0');
		number += number_2;
		*(r + count_2) = (number % 10) + '0';
		number_2 = number / 10; }
	for (; *n1; n1--, count_2--)
	{	number = (*n1 - '0') + number_2;
		*(r + count_2) = (number % 10) + '0';
		number_2 = number / 10; }
	for (; *n2; n2--, count_2--)
	{ number = (*n2 - '0') + number_2;
		*(r + count_2) = (number % 10) + '0';
		number_2 = number / 10; }
	if (number_2 && count_2 >= 0)
	{	*(r + count_2) = (number_2 % 10) + '0';
		return (r + count_2); }
	else if (number_2 && count_2 < 0)
		return (0);
	return (r + count_2 + 1);
}
