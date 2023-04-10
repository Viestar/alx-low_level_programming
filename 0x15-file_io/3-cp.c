#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*
 * Prototypes
 */

int file_copier(const char *file_from, const char *file_to, char *buffer);
void file_closer(int file);

/**
 * main - Entry Point
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* Checking for the number of arguments */
	if (argc < 3 || argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		free(buffer);
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

	int filfrm, filto, filred, filwrt;

	/* Checking if file is empty */
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		free(buffer);
		exit(98);
	}

	filfrm = open(file_from, O_RDONLY);
	filred = read(filfrm, buffer, 1024);
	filto = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		/* Incase we can not read from the file */
		if (filred == -1 || filfrm == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			file_closer(filfrm);
			exit(98);
		}

		filwrt = write(filto, buffer, 1024);

		/* Incase we cant write to the new file */
		if (filwrt == -1 || filto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			file_closer(filto);
			exit(99);
		}

		filred = read(filfrm, buffer, 1024);
		filto = open(file_to, O_WRONLY | O_APPEND);
	} while (filred > 0);

	free(buffer);
	file_closer(filfrm);
	file_closer(filto);

	return (0);
}

/**
 * file_closer - Closes a passed file
 * @file: file to be closed
 * Return: 1 for success or -1 if failed
 */

void file_closer(int file)
{
	int desclo;

	desclo = close(file);

	if (desclo == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", file);
		exit(100);
	}
}
