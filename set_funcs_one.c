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
		return;

	new_node->n = line_number;
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
	char *num = NULL;

	(void) line_number;

	if (stack == NULL || *stack == NULL)
		return;
	aux = *stack;
	while (aux != NULL)
	{
		num = _itoa(aux->n, 10);
		if (num == NULL)
			continue;
		write(1, num, _strlen(num));
		free(num);
		num = NULL;
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
	stack_t *aux = NULL;
	char *num = NULL;

	(void) line_number;

	if (stack == NULL || *stack == NULL)
		return;

	aux = *stack;

	num = _itoa(aux->n, 10);
	write(1, num, _strlen(num));
	free(num);
}

/**
 * exec_pop - removes the top element of the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

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
