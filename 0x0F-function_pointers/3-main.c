#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum/result/remainder/product/difference.
 * @argc: number of arguments passed.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0 for success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	/* Checking the number of arguments passed */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Coverting passed numbers into integers */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* Incase no operator match */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Calling the required function and print the result */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
