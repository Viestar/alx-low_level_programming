#include "main.h"

/**
 * append_text_to_file - appends a text to the file
 * @filename: file to be appended
 * @text_content: String to be added
 * Return: 1 for success or -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int string_len = 0;
	int fildes, filwrt;

	/* Calculating text length for the write() system call */
	if (text_content != NULL)
	{
		while (text_content[string_len])
			string_len++;
	}

	/* Incase file name is empty*/
	if (filename == NULL)
		return (-1);

	/* Opening file for appending */
	fildes = open(filename, O_APPEND | O_RDWR);

	/* Writing text to the file */
	filwrt = write(fildes, text_content, string_len);

	/*Checking for failure */
	if (filwrt == -1 || fildes == -1)
		return (-1);

	close(fildes);

	return (1);
}
