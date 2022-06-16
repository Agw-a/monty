#include "monty.h"

/**
 * push_stack-push new node to stack
 * @top:list's head address
 * @new:address of new node
 * Return:nothing/void
 */

void push_stack(stack_t **top, stack_t **new)
{
    if (*top == NULL)
    {
        (*new)->prev = NULL;
        (*new)->next = NULL;
        *top = (*new);
    }
    else
    {
        (*top)->prev = *new;
        (*new)->next = *top;
        *top = (*new);
    }
}

/**
 * enqueue-add new item to queue
 * @top:head address
 * @new:address to new node's pointer
 * Return:void/nothing
 */
void enqueue(stack_t **top, stack_t **new)
{
    stack_t *tmp;

    if (*top == NULL)
    {
        (*new)->prev = NULL;
        (*new)->next = NULL;
        *top = (*new);
    }
    else
    {
        tmp = *top;

        while (tmp->next)
            tmp = tmp->next;

        tmp->next = *new;
        (*new)->next = NULL;
        (*new)->prev = tmp;
    }
}