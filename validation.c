#include "monty.h"
/**
 * validate_file - function that validate that the file was opened
 * @fptr: FILE pointer containing the file
 * @filename: name of the file
 *
 */
void validate_file(FILE *fptr, char *filename)
{
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}
/**
 * free_stack_t - frees a DLL list.
 * @head: Pointer to head of list.
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_stack_t(stack_t *head)
{
	stack_t *cleaner = NULL;

	while (head)
	{
		cleaner = head;
		head = cleaner->next;
		free(cleaner);
	}
}
/**
 * exit_instruction - function that free variables
 * @stack: Pointer to the stack
 * @fptr: FILE pointer to the file
 * @line: line readed from file
 *
 */
void exit_instruction(stack_t **stack, FILE *fptr, char *line)
{
	free_stack_t(*stack);

	free(line);
	fclose(fptr);
	exit(EXIT_FAILURE);
}
/**
 * validate_number - function to check if a string contains a character
 * different than a number character
 * @str: string to operate
 *
 * Return: -1 if the string contain an invalid character, 0 otherwise
 */
int validate_number(char *str)
{
	int i = 0, c = 0;

	if (str == NULL || *str == '\0')
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c < 48 || c > 57)
			return (-1);
	}
	return (0);
}
/**
 * validate_condition - function to check for a condition to apply the exit
 * instruction.
 * @string: strings containing the first argument from a file
 * @line_number: number of line readed from file
 * @stack: double pointer to the stack
 * @ptr: FILE pointer to the file
 * @line: string containing the line from file
 *
 */
void validate_condition(char *string, unsigned int line_number,
			stack_t **stack, FILE *ptr, char *line)
{
	if (string[0] == '#')
		return;
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, string);
	exit_instruction(stack, ptr, line);

}
