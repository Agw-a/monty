#include "monty.h"

/**
 * pi_nt-prints value at the top of the stack.
 * @top:address of the list head
 * @line_number:line number in the monty file
 * Return:void or nothig
 */

void pi_nt(stack_t **top, unsigned int line_number)
{
	if (top == NULL || *top == NULL)
	{
	dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n",
	line_number);
	error_def = 1;
	return;
	}
	printf("%d\n", (*top)->n);
}
