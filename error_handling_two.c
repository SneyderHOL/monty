#include "monty.h"
/**
 * error_add - function to print an error message
 * @line_number: number of line (not actually needed).
 *
 */
void error_add(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
}

/**
 * error_sub - function to print an error message
 * @line_number: number of line (not actually needed).
 *
 */
void error_add(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't sub, stack too short", line_number);
}
