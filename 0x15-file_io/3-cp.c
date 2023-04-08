#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*
 * Prototypes
 */

int file_copier(const char *file_from, const char *file_to, char *buffer);

/**
 * main: Entry Point
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: 1 for success.
 * Descri: hey we here
 */

int main(int argc, char *argv[])
{
	char *buffer;

	/* Allocating space for the copying buffer */
	buffer = malloc(sizeof(char) * 1024);

	/* Checking if memory was allocated */
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Can't create buffer");
		return (99);
	}

	/* Checking for the number of arguments */
	if (argc < 3 || argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_copier(argv[1], argv[2], buffer);

	return (0);
}

/**
 * file_copier - copies from one file to another
 * @file_from: Source
 * @file_to: Destination.
 * @buffer: number of bytes for each round.
 * Return: 0 for success
 */

int file_copier(const char *file_from, const char *file_to, char *buffer)
{

	int filfrm, filto, filred, filwrt, desclo;

	/* Checking if file is empty */
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}

	filfrm = open(file_from, O_RDONLY);
	filred = read(filfrm, buffer, 1024);
	filto = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		/* Incase we can not read from the file */
		if (filred == -1 || filfrm == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			return (98);
		}

		filwrt = write(filto, buffer, 1024);

		/* Incase we cant write to the new file */
		if (filwrt == -1 || filto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}

		filred = read(filfrm, buffer, 1024);
		filto = open(file_to, O_WRONLY | O_APPEND);

	} while (filred > 0);

	free(buffer);

	desclo = close(filfrm);
	if (desclo == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %s\n", file_from);
		return (100);
	}
	desclo = close(filto);
	if (desclo == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %s\n", file_to);
		return (100);
	}

	return (0);
}
