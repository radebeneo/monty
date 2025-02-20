#include "monty.h"
/**
 * f_push - a function to add a new element at stack;
 * @stack: is a head node of stack;
 * @line_number: is number counted inside stack;
 *
 * Return: nothing.
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	stack_t *fresh;

	if (!stack)
		exit(EXIT_FAILURE);
	if (!(isnum(argument_container.arguments)))
	{
		printf("L%u: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	fresh = malloc(sizeof(stack_t));
	if (fresh == NULL)
	{
		printf("Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (argument_container.stack_queue == 0)
		nasus(stack, fresh);
	else
		veigar(stack, fresh);
}

/**
 * f_pall - is a function for printing or displaying stack elements;
 * @head: is head node of stack;
 * @line_number: not used;
 * Return: nothing.
*/
void f_pall(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *head;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
