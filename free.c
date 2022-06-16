#include "monty.h"

/**
 * free_list-frees linked list in stack.
 * @top:top of stack, head address
 * @fp:file pointer
 * @line:line being read
 * Return:nothing/void.
 */

void free_list(stack_t **top, FILE *fp, char *line)
{
	if (*top != NULL)
	{
		while ((*top)->next)
		{
			(*top) = (*top)->next;
			free((*top)->prev);
		}
		free(*top);
	}
	fclose(fp);
	free(line);
}
