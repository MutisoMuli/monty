#define _GNU_SOURCE
#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \n\t\a\b"

extern char **op_toks;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* 1.montyfile_error.c prototpes */
int montyfile_error(void);

/* 2.openfile_error.c prototpes */
int openfile_error(char *filename);

/* 3.opcode_error.c prototpes */
int opcode_error(char *opcode, unsigned int line_number);

/* 4.mallocfailed_error.c prototpes */
int malloc_fail(void);

/* 5.op_toks_error.c prototpes */
void op_tok_error(int error_code);

/* 6.string_converter.c prototpes */
char *fetch_int(int num);
unsigned int my_abs(int i);
int numbase_length(unsigned int num, unsigned int base);
void fill_buff(unsigned int num, unsigned int base,
		       char *buff, int buff_size);
/* 7.string_tokenizer.c prototpes */
char **tokenize_string(char *str, char *delims);
int _delimeter(char ch, char *delims);
int token_length(char *str, char *delims);
int token_count(char *str, char *delims);
char *next_token(char *str, char *delims);

/* 8.stacks prototpes */
void unload_stack(stack_t **stack);
int activate_stack(stack_t **stack);
int test_mode(stack_t *stack);

/* 9.execute_monty prototpes */
void free_memory(void);
unsigned int tokenarray_length(void);
int execute_monty(FILE *script_fd);
int empty_line(char *line, char *delims);
void (*operation_func(char *opcode))(stack_t**, unsigned int);

/* 10.pushinteger_error.c prototpes */
int pushint_error(unsigned int line_number);

/* 11.push_pall.c prototpes */
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);

/* 12.pint.c prototpes */
int pint_error(unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);

/* 13.pop.c prototpes */
void _pop(stack_t **stack, unsigned int line_number);
int pop_error(unsigned int line_number);

/* 14.briefstack.c prototpes */
int briefstack_error(unsigned int line_number, char *op);
/* 15.swap.c prototpes */
void _swap(stack_t **stack, unsigned int line_number);

#endif
