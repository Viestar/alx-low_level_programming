#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to be created
 * @text_content: string to be written.
 * Return: 1 for success
 */

int create_file(const char *filename, char *text_content)
{
	/* Declarations and Initialisations */
	int string_len = 0;
	int fildes, filwrt;

	/* Finding length of the passed string */
	if (text_content != NULL)
	{
		while (text_content[string_len])
			string_len++;
	}

	if (filename == NULL)
		return (-1);

	/* openning/creating the file with permissions */
	fildes = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	/* Writing contents to the file */
	filwrt = write(fildes, text_content, string_len);

	/* Incase no files were written */
	if (filwrt == -1 || fildes == -1)
		return (-1);

	close(fildes);

	/* Products */
	return (1);
}
