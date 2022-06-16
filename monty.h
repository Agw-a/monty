#ifndef MONTY_H_
#define MONTY_H_

/*C standard libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Stack or Qued structure*/
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

/*opcode*/

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

/*Global variable*/
extern int error_def;

/*DEFINED PROTOTYPES*/

/*push.c*/
void pu_sh(stack_t **top, unsigned int line_number, char *arg, int *mode)

char *check_args(char *token, unsigned int line_number)

void get_err(unsigned int line_number)

int is_number(char *return_str, unsigned int line_number)

/*pall.c*/
void pa_ll(stack_t **top, unsigned int line_number)

/*push_stack_queue*/
void push_stack(stack_t **top, stack_t **new)

void enqueue(stack_t **top, stack_t **new)

/*pop.c*/
void po_p(stack_t **top, unsigned int line_number)

/*pint.c*/
void pi_nt(stack_t **top, unsigned int line_number)

#endif /*MONTY_H_*/
