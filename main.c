#include "monty.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: a char pointer to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *filename = NULL, *line = NULL, *args[] = {NULL, NULL, NULL};
	FILE *fptr = NULL;
	size_t lineSize = 0;
	ssize_t line_read_char = 0;
	int count = 0, i = 0;
	stack_t stack = NULL;

	if (argc != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n", 18);
		return (EXIT_FAILURE);
	}
	filename = argv[1];
	validate_filename(filename);
	fptr = fopen(filename, "r");
	validate_file(fptr);
	line_read_char = getline(&line, &lineSize, fptr);
	for (count = 1; line_read_char != -1; count++)
	{
		split_line(args, line);
		for (i = 0; i < 3 && args[i] != NULL; i++)
		{
			printf("%s\n", args[i]);
		}
		line_read_char = getline(&line, &lineSize, fptr);
	}
	free(line);
	fclose(fptr);
	return (0);
}
