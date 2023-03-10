#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies the first two integer numbers.
 * @argc: Number of arguments passed
 * @argv: one dimension array of the arguments.
 * Return: 0 for success or 1 if less than two arguments are passed.
 */

int main(int argc, char *argv[])
{
	int index, product;

	product = index = 0;

	/* Cheking if enough arguments are passed to carry out multiplication*/
	if (argc < 3)
	{
		printf("Error\n");
		return (1); /* Returning 1 if unsuccessful */
	}
	else
	{
		/*Initialising product to 1 because anything multiplied by 0 is 0 */
		product = 1;

		/*Iterating only up to a third item incase more are passed */
		for (index = 1; index < 3; index++)

			/* Using the atoi() function to turn a string an integer */
			product = product * atoi(argv[index]);

		/*Finally printing the product*/
		printf("%d\n", product);
	}

	return (0); /* Returning 0 for success */
}
