#include "main.h"
#include <stdlib.h>

/* Prototype to calculate total size */
int calculate_size(int ac, char **av);

/**
 * argstostr - Adds all arguments into on string separated by a new line
 * @ac: Number of arguments passed to the program.
 * @av: Array of pointers to the arguments.
 * Return: NULL or pointer to the string.
 */

char *argstostr(int ac, char **av)
{
	char *str; /* Container for all the argumnets*/
	int args_arr_index, arg_size, index, total_size;

	args_arr_index = arg_size = total_size = ac;

	/* Checking whether any arguments are passed */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* importing size of all arguments */
	total_size = calculate_size(ac, av);

	/* Allocating memory to the array */
	str = malloc(sizeof(char) * total_size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	/* Looping through the array indexing arguments */
	for (args_arr_index = 0; args_arr_index < ac; args_arr_index++)
	{
		/* Looping through each argument locating items */
		for (arg_size = 0; av[args_arr_index][arg_size]; arg_size++)

			/* Populating the new string with all items in each argument */
			str[index++] = av[args_arr_index][arg_size];

		/* Adding a new line every after a single loop of an argument */
		str[index++] = '\n';
	}

	str[total_size] = '\0';

	return (str);
}

/**
 * calculate_size - Calculate size of all arguments.
 * @ac: Number of arguments passed to the program.
 * @av: Array of pointers to the arguments.
 * Return: NULL or pointer to the string.
 */

int calculate_size(int ac, char **av)
{
	int args_arr_index, arg_size, total_size;

	args_arr_index = arg_size = total_size = ac;

		/* Looping through the array to locate arguments */
	for (args_arr_index = 0; args_arr_index < ac; args_arr_index++)
	{
		/* Looping through each argument calculating @total_size */
		for (arg_size = 0; av[args_arr_index][arg_size]; arg_size++)
			total_size++;
	}
	return (total_size);
}
