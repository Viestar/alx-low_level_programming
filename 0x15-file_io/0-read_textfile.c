#include "main.h"

/**
 * read_textfile - Reads and writes files content to the POSIX
 * @filename: File to read from.
 * @letters: number of letters to read.
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t len = sizeof(char) * letters;
	char *buffer;
	int fildes, filred, filwrt;

	/*Allocating memory for the buffer */
	buffer = malloc(len);

	/*Checking if it was created */
	if (buffer == NULL)
		return (0);

	/* Checking if the passed file is empty */
	if (filename == NULL)
		return (0);

	/* Fetching the descriptors*/
	fildes = open(filename, O_RDONLY);

	/* Saving the number of characters to be read */
	filred = read(fildes, buffer, letters);

	/* storing and Writing the buffer to STDOUT, of @filred characters long */
	filwrt = write(STDOUT_FILENO, buffer, filred);

	/* Checking for errors */
	if (fildes == -1 || filred == -1 || filwrt != filred || filwrt == -1)
	{
		free(buffer);
		return (0);
	}

	/* Freeing the buffer memory after use */
	free(buffer);
	close(fildes);

	/* Returning the written number of characters */
	return (filwrt);
}
