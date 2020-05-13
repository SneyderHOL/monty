#ifndef HOLBERTON_MONTY_H
#define HOLBERTON_MONTY_H
/**  Imports  **/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**  Global variable  **/
extern int global_variable[2];

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
void exec_add(stack_t **stack, unsigned int line_number);
void exec_nop(stack_t **stack, unsigned int line_number);

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

void exit_instruction(stack_t **stack, FILE *ptr, char *line);

void free_stack_t(stack_t *head);

void call_functions(stack_t **stack, char **array, unsigned int line_number,
                    FILE *ptr, char *line);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
void validate_file(FILE *fptr, char *filename);
void error_pop(unsigned int line_number);
char *_itoa(unsigned int num, unsigned int base);
void rev_string(char *s, int size);
int num_len(unsigned int num, unsigned int base);


void split_line(char **args, char *line);
void free_grid(char **grid, int height);
#endif /**  HOLBERTON_MONTY_H   **/
