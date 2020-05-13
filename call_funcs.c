#include <stdlib.h>
#include "monty.h"

/**
 * call_functions - compares opcode to call function
 * @opcode: string to compare
 * Return: Nothing meanwhile.
 */

void call_functions(char *str, int line_number)
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

	for (fcount = 0; funcs[fcount].opcode != NULL; fcount++)
	{
		if (_strcmp(str, funcs[fcount].opcode) == 1)
		{
			funcs[fcount].f(**stack, line_number);
			break;
		}
	}
}

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
