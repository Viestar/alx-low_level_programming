#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the arguments passed including function its self
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 for success
 */

/* number(argc) and array(argv) of arguments passed into main as arguments */
int main(int argc, char *argv[])
{
	int index;

	/**
	* We could just printed (argv) but this renders (argc) an unused variable.
	* Therefore:
	* We iterating via argc getting an index to fetch items from argv with)
	*/
	for (index = 0; index < argc; index++)
	printf("%s\n", argv[index]);

	return (0); /* Returns zero for success */
}
