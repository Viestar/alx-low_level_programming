#include <stdio.h>
#include <string.h> /* strlen */
#include <stdlib.h> /* srand */

/**
 * main - crackme5 password generator and printer
 * @argc: Number of arguments passed.
 * @argv: Array of arguments passed.
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int length, index, size;
	char password[7], *base;

	index = size = 0;
	base = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	length = strlen(argv[1]);
	if (argc != 2)
		return (1);
	password[0] = base[(length ^ 59) & 63];
	while (index < length)
	{
		size += argv[1][index];
		index++;
	}
	password[1] = base[(size ^ 79) & 63];
	for (index = 0, size = 1; index < length; index++)
		size *= argv[1][index];
	password[2] = base[(size ^ 85) & 63];

	for (index = 0, size = 0; index < length; index++)
	{
		if (argv[1][index] > size)
			size = argv[1][index];
	}
	srand(size ^ 14);
	password[3] = base[rand() & 63];
	for (index = 0, size = 0; index < length; index++)
		size += argv[1][index] * argv[1][index];
	password[4] = base[(size ^ 239) & 63];

	index = size = 0;
	while (index < argv[1][0])
	{
		size = rand();
		index++;
	}
	password[5] = base[(size ^ 229) & 63];
	password[6] = '\0';
	printf("%s\n", password);
	return (0);
}
