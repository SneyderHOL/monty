#include "monty.h"
/**
 * exec_push - pushes an element to the stack.
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL, *aux = NULL;

	if (stack == NULL || global_variable[1] == 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		global_variable[1] = -1;
		return;
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed");
		global_variable[1] = -1;
		return;
	}
	new_node->n = global_variable[0];
	new_node->prev = NULL;
	new_node->next = NULL;
	if (global_variable[2] == 0 || *stack == NULL)
	{
		new_node->next = (*stack);
		if ((*stack))
			(*stack)->prev = new_node;
		(*stack) = new_node;
	}
	else
	{
		aux = *stack;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new_node;
		new_node->prev = aux;
	}
}
/**
 * exec_pall - prints all the values on the stack, starting from the top of
 * the stack.
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
 * exec_pint - prints the value at the top of the stack, followed by a new line
 * @stack: doubly linked list representation of a stack (or queue).
 * @line_number: integer
 * return: void.
 */
void exec_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		global_variable[1] = -1;
		return;
	}
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

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
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
	stack_t *aux = NULL;
	int tmp = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		global_variable[1] = -1;
		return;
	}
	aux = (*stack)->next;
	tmp = (*stack)->n;
	(*stack)->n = aux->n;
	aux->n = tmp;
}
