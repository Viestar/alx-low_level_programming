#include "main.h"
#include <stdio.h>
#include <stdlib.h> /* imported this library to get atoi() */


/**
 * main - Program that adds  positive numbers.
 * @argc: Number of arguments passed
 * @argv: one dimension array of the arguments.
 * Return: 0 for success or 1 if a symbol is passed
 */

int main(int argc, char *argv[])
{
	int index, sum;

	sum = index = 0;

	/* When no numbers passed */
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		/* Iterating through all passed arguments except the first*/
		for (index = 1; index < argc; index++)
		{
			/* Using atoi() to check if argc at argv[index] is an integer */
			if (atoi(argv[index]))
			{
			/* Using the atoi() function to turn a string an integer */
			    sum = sum + atoi(argv[index]);
			}
			else
			{
				/* Output for non integers*/
				printf("Error\n");
				return (1); /* Returning 1 if unsuccessful */
			}
		}
		/*Finally printing the sum */
		printf("%d\n", sum);
	}

	return (0); /* Returning 0 for success */
}
