# Project: 0x19 C - Stacks, Queues - LIFO, FIFO

Interpreter for Monty ByteCodes files.

Concepts:

    What do LIFO and FIFO mean
    What is a stack, and when to use it
    What is a queue, and when to use it
    What are the common implementations of stacks and queues
    What are the most common use cases of stacks and queues
    What is the proper way to use global variables


Requirements:

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 14.04 LTS
    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style.
    You allowed to use a maximum of one global variable
    No more than 5 functions per file
    You are allowed to use the C standard library
    The prototypes of all your functions should be included in your header file called monty.h
    Don’t forget to push your header file
    All your header files should be include guarded


How to compile this project:

    gcc -Wall -Werror -Wextra -pedantic *.c -o monty


Usage:

    ./monty file.m


Content of file.m (example):

    push 1
    push 2
    push 3
    pall

output:

    3
    2
    1


Commands:

    push  -	Pushes an element to the stack
    pall  -	Prints all elements in the stack
    pint  -	Prints first stack element
    pop   -	Removes last stack element
    swap  -	Inverts stack nodes positions
    nop   -	Ignores command
    #     -	Comments
    add   -	Adds top two stack elements
    sub   -	Subtracts top two stack elements
    div   -	Divides top two stack elements
    mul   -	Multiplies top two stack elements
    mod   -	Computes division remainder from top two stack elements
    pchar -	Prints first stack element in ascii value
    pstr  -	Prints all stack elements in ascii value
    rotl  -	Sends first stack element to last position
    rotr  -	Send last stack element to first position
    stack -	Sets stack format to LIFO (Last In First Out)
    queue -	Sets stack format to FIFO (First In, First Out)


By:

	Christian Campos
	Sneyder Amador
