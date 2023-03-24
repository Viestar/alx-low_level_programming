#include "3-calc.h"


/**
 * get_op_func - Matches the required function
 * @s: The operator passed as argument.
 * Return: pointer to the required function.
 */

int (*get_op_func(char *s))(int, int)
{
	/* Array of function pointers */
	op_t op_ins[] = {
		{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}
	};
	int i = 0;

	/* Looping through the op_ins until an operator is found */
	while (op_ins[i].op != NULL && *(op_ins[i].op) != *s)
		/* Incrementing incase an operator isn't found yet */
		i++;

	/* Returning the f member of the op_ins array */
	return (op_ins[i].f);
}
