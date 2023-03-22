#include <stdio.h>
#include <stdlib.h>

/**
 * main - Outputs opcodes .
 * @argc: number of arguments
 * @argv: Array of pointers to the passed the arguments.
 * Return: 0 for success.
 */


int main(int argc, char *argv[])
{
	unsigned char opcode;
	int op_size;
	int count;

	/* pointer to main */
	int (*location)(int, char **) = main;

	/* Checking if more than enough arguments are passed */
	if (argc != 2)
	{
		/* If, Error is displayed with exit code 1 */
		printf("Error\n");
		exit(1);
	}

	/* Using atoi to convert the second argument to int */
	op_size = atoi(argv[1]);

	/* Checking for negatives */
	if (op_size < 0)
	{
		/* If, Error is displayed with exit code 2 */
		printf("Error\n");
		exit(2);
	}

	/* Looping through until opcode size */
	for (count = 0; count < op_size; count++)
	{
		/* Printing the opcode */
		opcode = *(unsigned char *)location;
		printf("%.2x", opcode);
		if (count == op_size - 1)
			continue;
		printf(" ");
		location++;
	}
	/* Ending with a newline */
	printf("\n");
	return (0);
}
