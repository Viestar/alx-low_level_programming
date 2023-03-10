#include "main.h"
#include <stdio.h>


/**
 * main - Prints the number of arguments passed into main.
 * @argc: number of arguments passed.
 * @argv: Array of arguments passed.
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int num_args;

	/* Checking if only one argument passed */
	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		/**
		 * We could've just printed (argc) but this renders (argv) unsed variable.
		 * Therefore:
		 * We iterating through the array saving the number of items into (num_args)
		*/
		for (num_args = 0; *argv; num_args++, argv++)
			;

		/* Printing the number of arguments less the one of the argc itself */
		printf("%d\n", num_args - 1);
	}

	return (0);
}
