#include "main.h"
#include <stdio.h>
#include <stdlib.h> /* imported this library to get atoi() */

/* Prototypes*/
int changer(int coin);


/**
 * main - Prints minimum number of coins to make change.
 * @argc: Number of arguments passed
 * @argv: one dimension array of the arguments.
 * Return: 0 for success or 1 if a symbol is passed
 */

int main(int argc, char *argv[])
{
	int coin;

	coin = 0;

	/* When no numbers passed */
	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1); /* Returning 1 if unsuccessful */
	}
	else
	{
		/* Using atoi() to convert argc to integer and see it not negative */
		if (atoi(argv[1]) >= 0)
		{
		/* calling the changer function */
		coin = changer(atoi(argv[1]));
		/*Finally printing the coins */
		printf("%d\n", coin);
		}
		else
		{
		/* Output 0 if argc passed is a negative*/
		printf("0\n");
		}

	}

	return (0); /* Returning 0 for success */
}

/**
 * changer - Generates coins
 * @note: Money to be changed
 * Return: The number of coins
 */

int changer(int note)
{
	int index = 0;

	while (note != 0)
	{
		if (note % 10 == 9 || note % 10 == 7)
			note -= 2;
		else if (note % 25 == 0)
			note -= 25;
		else if (note % 10 == 0)
			note -= 10;
		else if (note % 5 == 0)
			note -= 5;
			else if (note % 2 == 0)
		{
			if (note % 10 == 6)
				note -= 1;
			else
				note -= 2;
		}
		else
			note -= 1;

		index++;
	}

	return (index);
}
