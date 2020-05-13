#include <stdlib.h>
#include "monty.h"

/**
 * exec_push - pushes an element to the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	(void) line_number;

	if (!new_node)
		return;

	new_node->n = global_variable[0];
	new_node->next = (*stack);
	new_node->prev = NULL;

	if ((*stack))
		(*stack)->prev = new_node;

	(*stack) = new_node;
}

/**
 * exec_pall  prints all the values on the stack, starting from the top of
 the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	(void) line_number;
	if (stack == NULL || *stack == NULL)
		return;
	aux = *stack;
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}

/**
 * exec_pint - prints the value at the top of the stack, followed by a new line.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (stack == NULL || *stack == NULL)
		return;

	printf("%d\n", (*stack)->n);
}

/**
 * exec_pop - removes the top element of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;
	
/*	(void) line_number;*/
	if (stack == NULL || *stack == NULL)
	{
		error_pop(line_number);
		global_variable[1] = -1;
		return;
	}
	aux = *stack;
	*stack = aux->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(aux);
}

/**
 * exec_swap - swaps the top two elements of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_swap(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
