#include "main.h"
#include <stdio.h>

/**
 * main - Printing its own name.
 * @argc: number of arguments passed to the function.
 * @argv: Array of arguments passed.
 * Return: 0 for success.
 */

/* number and array of arguments being passed into main as arguments */
int main(int argc, char *argv[])
{
	int i;

	i = argc;

	/* Multiplying argc OR i I by 0 to get the index '0' */
	printf("%s\n", argv[i * 0]);

	return (0); /* Returns zero for success */
}
