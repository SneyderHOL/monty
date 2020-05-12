#include "monty.h"
/**
 * validate_filename - function that validate the filename
 * @filename: char pointer containing the filename
 *
 */
void validate_filename(char *filename)
{
	char *mssg = NULL;

	if (filename == NULL || *filename == '\0')
	{
		mssg = "Error: Can't open filename\n";
		write(STDERR_FILENO, mssg, _strlen(mssg));
		exit(EXIT_FAILURE);
	}
}
/**
 * validate_file - function that validate that the file was opened
 * @fptr: FILE pointer containing the file
 *
 */
void validate_file(FILE *fptr)
{
	char *mssg = NULL;

	if (fptr == NULL)
	{
		mssg = "Error: Can't open file\n";
		write(STDERR_FILENO, mssg, _strlen(mssg));
		exit(EXIT_FAILURE);
	}
}

/**
 * validate_line_read - function that validate if the line of a file was read
 * properly
 * @line_read: number of characters read from the file
 *
 */
void validate_line_read(ssize_t line_read)
{
	char *mssg = NULL;

	if (line_read == -1)
	{
		mssg = "Error: Can't open read\n";
		write(STDERR_FILENO, mssg, _strlen(mssg));
		exit(EXIT_FAILURE);
	}
}
