#include "monty.h"
/**
 * exec_div - divides the second top element of the stack by the top element
 * of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_div(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		global_variable[1] = -1;
		return;
	}
	tmp = (*stack)->n;
	if (tmp == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		global_variable[1] = -1;
		return;
	}
	((*stack)->next)->n /= tmp;
	exec_pop(stack, line_number);
}
/**
 * exec_mod - computes the rest of the division of the second top element of
 * the stack by the top element of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_mod(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		global_variable[1] = -1;
		return;
	}
	tmp = (*stack)->n;
	if (tmp == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		global_variable[1] = -1;
		return;
	}
	((*stack)->next)->n %= tmp;
	exec_pop(stack, line_number);
}
/**
 * exec_pchar - prints the char at the top of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_pchar(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		global_variable[1] = -1;
		return;
	}
	tmp = (*stack)->n;
	if (tmp < 0 || tmp > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		global_variable[1] = -1;
		return;
	}
	printf("%c\n", tmp);
}
/**
 * exec_rotl - rotate the stack to the top.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_rotl(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;
	stack_t *aux = NULL;

	(void) line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	aux = *stack;
	while (aux->next != NULL)
	{
		tmp = aux->n;
		aux->n = aux->next->n;
		aux->next->n = tmp;
		aux = aux->next;
	}
}

/**
 * exec_rotr - rotate the stack to the bottom.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: number of line of the opcode to execute
 * return: void.
 */
void exec_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	(void) line_number;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	aux = *stack;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = (*stack);
	(aux->prev)->next = NULL;
	aux->prev = NULL;
	(*stack)->prev = aux;
	(*stack) = aux;
}
