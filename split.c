#include "monty.h"
/**
 * split_line - function to tokenize a string into arguments
 * @args: array of strings to store the arguments
 * @line: a char pointer to tokenize
 *
 */
void split_line(char **args, char *line)
{
	char *aux = NULL, delim[] = {' ', '\t', '\n', '\0'};
	int i = 0;

	aux = strtok(line, delim);
	for (i = 0; i < 2 && aux != NULL; i++)
	{
		args[i] = aux;
		aux = strtok(NULL, delim);
	}

}
/**
 * free_grid - frees a 2 dimensional grid created
 * @grid: 2 dimensional integer array argument
 * @height: integer argument
 *
 */
void free_grid(char **grid, int height)
{
	int a = 0;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
