#include "lists.h"
/**
 *add_dnodeint_end - add node end list
 *@head: V
 *@n: V
 *Return: dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
	{
		return (NULL);
	}
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		last->prev = NULL;
		*head = last;
		return (last);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = last;
	last->prev = tmp;
	return (last);
}
