#include <stdio.h>

void __attribute__((constructor)) tortoise_talk(void);

/**
 * tortoise_talk - Prints a string before the main.
 */

void tortoise_talk(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
