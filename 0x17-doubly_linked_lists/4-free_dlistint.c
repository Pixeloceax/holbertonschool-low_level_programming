#include "lists.h"
/**
 *free_dlistint - free all
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *test;

	if (head == NULL)
	{
		return;
	}
	tmp = head;
	while (tmp->prev)
	{
		tmp = tmp->prev;
	}
	while (tmp)
	{
		test = tmp;
		tmp = tmp->next;
		free(test);
	}
}
