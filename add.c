#include "monty.h"

/**
 * ad_d-adds top two elements of stack.
 * @top:linked list head address
 * @line_number:line number in current file
 * Return:void/nothing
 */

void ad_d(stack_t **top, unsigned int line_number)
{
	int sum = 0;

	if (*top == NULL || (*top)->next == NULL)
	{
		dprintf(STDERR_FILENO,
			"L%d: can't add, stack too short\n",
			line_number);
		error = 1;
		return;
	}

	sum = ((*top)->n) + (((*top)->next->n);
	po_p(top, line_number);
	(*top)->n = sum;
}
