#include "monty.h"
/**
 * validate_file - function that validate that the file was opened
 * @fptr: FILE pointer containing the file
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

void exit_instruction(stack_t **stack, FILE *fptr, char *line)
{
        free_stack_t(*stack);
        free(line);
        fclose(fptr);
        exit(EXIT_FAILURE);
}
void error_pop(unsigned int line_number)
{
	fprintf(stderr, "L %u: can't pop an empty stack\n", line_number);
	
}
