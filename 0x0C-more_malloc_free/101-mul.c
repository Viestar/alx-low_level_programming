#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> /* Has the isdigit() function*/

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of argements passed.
 * @argv: Array of arguments passed.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int nr_args, nr1, nr2, product;

	nr1 = nr2 = product = 0;
	nr_args = argc;

	/* Exiting the program if not enough arguments are passed */
	if (nr_args != 3)
	{
		printf("Error\nr_args");
		exit(98);
	}

	/* Exiting the program incase empty arguments are passed */
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("Error\nr_args");
		exit(98);
	}

	/* Exiting the program incase non-digit items are passed as arguments*/
	nr1 = isdigit(*argv[1]);
	nr2 = isdigit(*argv[2]);
	if (!nr1 || !nr2)
	{
		printf("Error\nr_args");
		exit(98);
	}

	/* Type casting the arguments to integers for multiplication */
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
