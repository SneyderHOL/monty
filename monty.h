#ifndef HOLBERTON_MONTY_H
#define HOLBERTON_MONTY_H
/**  imports  **/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**  Structs  **/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**  Function prototoypes   **/

void exec_push(stack_t **stack, unsigned int line_number);
void exec_pall(stack_t **stack, unsigned int line_number);
void exec_pint(stack_t **stack, unsigned int line_number);
void exec_pop(stack_t **stack, unsigned int line_number);
void exec_swap(stack_t **stack, unsigned int line_number);
/*add*/
/*nop*/

/*sub*/
/*div*/
/*mul*/
/*mod*/
/*comments*/
/*pchar*/
/*pstr*/
/*rotl*/
/*rotr*/
/*stack*/
/*queue*/
/*holberton*/
/*add_2_dig*/
/*mul*/
/*mul_lvlup*/

int _strlen(char *s);
char *str_concat(char *s1, char *s2);

void validate_filename(char *filename);
void validate_file(FILE *fptr);

void split_line(char **args, char *line);
void free_grid(char **grid, int height);
#endif /**  HOLBERTON_MONTY_H   **/
