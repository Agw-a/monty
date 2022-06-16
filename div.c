#include "monty.h"

/**
 * di_v-divides the second top element of stack by top elemen
 * @top:head address
 * @line_number:line number in current file
 * Return:void/nothing
 */

void di_v(stack_t **top, unsigned int line_number)
{
	int quotient = 0;

	if (*top == NULL || (*top)->next == NULL)
	{
		dprintf(STDERR_FILENO,
			"L%d: can't div, stack too shart\n",
			line_number);
		error_def = 1;
		return;
	}
	if ((*top)->n == 0)
	{
		dprintf(STDERR_FILENO,
			"L%d: division by zero\n",
			line_number);
		error_def = 1;
		return;
	}

	quotient = (((*head)->next)->n) / ((*head)->n);
	po_p(top, line_number);
	(*top)->n = quotient;
}
