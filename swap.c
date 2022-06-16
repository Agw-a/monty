#include "monty.h"

/**
 * swa_p-swap-swap top two elements of stack
 * @top:pointer to top of stack/list
 * @line_number:line number in current file
 * Return:nothing/void.
 */
void swa_p(stack_t **top, unsigned int line_number)
{
	int i;

	if (*top == NULL || (*top)->next == NULL)
	{
		dprintf(
			STDERR_FILENO,
			"L%d: can't swap, stack too short\n",
			line_number);
		error_def = 1;
		return;
	}
	i = (*top)->i;
	((*top)->next)->i = i;
}
