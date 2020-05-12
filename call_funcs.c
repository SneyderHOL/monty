#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "monty.h"
/**
 * instruction_t - compares opcode to call function
 * @opcode: string to compare
 * Return: Nothing meanwhile.
 */

void call_functions(char *command, ...){

	fcount = NULL;

	va_list ap;
	instruction_t funcs[] =
		{
			{"push", exe_push},
			{"pall", exe_pall},
			{"pint", exe_pint},
			{"pop", exe_pop},
			{"swap", exe_swap},
			{"add", exe_add},
			{"nop", NULL},
			{NULL, NULL}
		};

	va_start(ap, command);

	while (funcs[fcount] != '\0')
	{
		_strcmp(command, funcs[fcount].opcode);
		if (_strcmp == 1)
			funcs[fcount].f(**stack, line_number);
		fcount++;
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
