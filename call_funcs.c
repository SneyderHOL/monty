#include <stdlib.h>
#include "monty.h"

/**
 * call_functions - compares opcode to call function
 * @stack: double pointer to the stack
 * @array: array of strings containing the arguments from file
 * @line_number: number of line readed from file
 * @ptr: FILE pointer to the file
 * @line: string containing the line from file
 *
 * Return: Nothing meanwhile.
 */

int global_variable[2] = {0, 0};

void call_functions(stack_t **stack, char **array, unsigned int line_number,
		    FILE *ptr, char *line)
{
	int fcount = NULL;

	instruction_t funcs[] = {
		{"push", exec_push},
		{"pall", exec_pall},
		{"pint", exec_pint},
		{"pop", exec_pop},
		{"swap", exec_swap},
		{"add", exec_add},
		{"nop", NULL},
		{NULL, NULL}
	};

	for (fcount = 0; funcs[fcount].opcode != NULL || fcount < 7; fcount++)
	{
		if (_strcmp(array[0], funcs[fcount].opcode) == 1)
		{
			if (fcount == 0)
				global_variable[0] = atoi(array[1]);
			funcs[fcount].f(stack, line_number);
			break;
		}
	}
	if (fcount == 7)
	{
		if (*array[0] == '\n')
			return;
		fprintf(stderr, "L %d: unknown instruction %s\n",
			line_number, array[0]);
		exit_instruction(stack, ptr, line);
	}
}
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Nothing meanwhile.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
	{
		a++;
	}
	if (s1[a] == '\0')
		return (1);
	else
		return (0);
}
