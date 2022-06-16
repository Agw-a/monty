#include "monty.h"

/**
 * pu_sh-push new element to the list
 * @top:head address
 * @line_number:line number of monty file that is currently active
 * @arg:argument given to push
 * @mode:type, 0 if stack and 1 if queue.
 * Return:Nothing
 */
void pu_sh(stack_t **top, unsigned int line_number, char *arg, int *mode)
{
	stack_t *new = NULL;
	int num = atoi(arg);

	(void)line_number;

	free(arg);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
	dprintf(STDERR_FILENO, "Error: malloc failed\n");
	error_def = 1;
	return;
	}
	new->n = num;
	if (*mode == 0)
		push_stack(top, &new);
	else
		enqueue(top, &new);
}

/**
 * check_args-check if push has an accompanying arg.
 * @token:token in push's line
 * @line_number:line number
 * Return:pointer to character representing args in push or NULL.
 */
char *check_args(char *token, unsigned int line_number)
{
	char *toke__n;
	char *arg;
	int i, len;

	(void)token;

	toke__n = strtok(NULL, " \n");

	while (toke__n && toke__n[0] == ' ')
	toke__n = strtok(NULL, " \n");

	if (!toke__n)
	{
	get_err(line_number);
	return (NULL);
	}
	for (len = 0;
	(toke__n[len] && toke__n[len] != '\n' && toke__n[len] != ' '); len++)
	;
	arg = malloc(sizeof(char) * (len + 1));

	if (!arg)
	{
	get_err(line_number);
	return (NULL);
	}

	for (i = 0; i < len; i++)
		arg[i] = toke__n[i];
	arg[i] = '\0';

	if (is_number(arg, line_number) == 1)
		return (NULL);
	return (arg);
}

/**
 * get_err-displays error message to stderr
 * @line_number:line number in file
 */
void get_err(unsigned int line_number)
{
	dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
	error_def = 1;
}

/**
 * is_number-check if push argument is a number
 * @return_str:the token retreived in push command.
 * @line_number:line number in file.
 * Return:int.
 */
int is_number(char *return_str, unsigned int line_number)
{
	int i = 0;

	if (!(return_str[i] > 48 && return_str[i] <= 57) && return_str[i] != '-')
	{
	get_err(line_number);
	return (1);
	}
	else
	i++;
	while (return_str[i])
	{
	if (return_str[i] >= 48 && return_str[i] <= 57)
		i++;
	else
	{
	get_err(line_number);
	return (1);
	}
	}
	return (0);
}
