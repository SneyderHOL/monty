#include "monty.h"
#include <ctype.h>
/**
 * exec_add - adds the top elements of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_add(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			line_number);
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
/**
 * exec_sub - subtracts from the second top element of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_sub(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		global_variable[1] = -1;
		return;
	}
	tmp = ((*stack)->next)->n;
	tmp -= (*stack)->n;
	((*stack)->next)->n = tmp;
	exec_pop(stack, line_number);
}

/**
 * exec_mul - multiplies the top element of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_mul(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		global_variable[1] = -1;
		return;
	}
	tmp = ((*stack)->next)->n;
	tmp *= (*stack)->n;
	((*stack)->next)->n = tmp;
	exec_pop(stack, line_number);
}

/**
 * exec_pstr - prints the string starting at the top of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *(stack);
	(void) line_number;

	if (stack == NULL || (*stack) == NULL)
	{
		printf("\n");
		return;
	}
	while (aux)
	{
		if (aux->n == '\0')
			break;
		if (!(isascii((aux)->n)))
			break;
		printf("%c", aux->n);
		aux = aux->next;
	}
	printf("\n");
}
