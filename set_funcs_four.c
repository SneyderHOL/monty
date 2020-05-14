#include "monty.h"
/**
 * exec_stack - sets the format of the data to a stack (LIFO)
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	global_variable[2] = 0;
}
/**
 * exec_queue - sets the format of the data to a queue (FIFO)
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	global_variable[2] = 1;
}
