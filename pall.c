#include "monty.h"

/**
 * pa_ll-print all list data
 * @top:address of list head
 * @line_number:line number in monty file
 * Return:nothing
 */
void pa_ll(stack_t **top, unsigned int line_number)
{
	stack_t *t = *top;

	(void)line_number;

	if (*top == NULL)
		return;
	while (t)
	{
	printf("%d\n", t->n);
	t = t->next;
	}
}
