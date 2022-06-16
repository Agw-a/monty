#include "monty.h"

/**
 * po_p-removes top element fron stack
 * @top:top address in the list
 * @line_number:line number in current file
 * Return:void or nothing
 * 
 */

void po_p(stack_t **top, unsigned int line_number)
{
    stack_t *tmp = NULL;

    if (*top == NULL)
    {
        dprintf(STDERR_FILENO,
        "L%d: cant pop an empty stack\n",line_number);
        error_def = 1;
        return;
    }
    if ((*top)->next == NULL)
    {
        free(*top);
        *top = NULL;
    }
    else
    {
        tmp = *top;
        ((*top)->next)->prev = NULL;
        (*top) = (*top)->next;
        free(tmp);
    }
}