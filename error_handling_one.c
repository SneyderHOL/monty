#include <stdlib.h>
#include "monty.h"

/**
 * error_malloc - function to print an error message
 * @line_number: number of line (not actually needed).
 *
 */
void error_malloc(unsigned int line_number)
{
	(void) line_number;
	fprintf(stderr, "Error: malloc failed");
}

/**
 * error_push - function to print an error message.
 * @line_number: number of line.
 *
 */
void error_push(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
}

/**
 * error_pint - function to print an error message.
 * @line_number: number of line.
 *
 */
void error_pint(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
}
