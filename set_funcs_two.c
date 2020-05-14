#include "monty.h"
/**
 * exec_add - adds the top elements of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_add(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		error_add(line_number);
		global_variable[1] = -1;
		return;
	}
	tmp = (*stack)->n;
	tmp += ((*stack)->next)->n;
	((*stack)->next)->n = tmp;
	exec_pop(stack, line_number);
}

/**
 * exec_nop - does nothing.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
