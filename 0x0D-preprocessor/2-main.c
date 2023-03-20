#include <stdio.h>

/**
 * main - Prints house directory.
 * Return: 0 for success.
 */

int main(void)
{
	/* Using the __FILE__ macro that exapnds full path to current directory */
	printf("%s\n", __FILE__);

	return (0);
}
