#include "lists.h"
/**
 *add_dnodeint - add node head list
 *@head: V
 *@n: V
 *Return: dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first;

	first = malloc(sizeof(dlistint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->prev = NULL;
	first->next = NULL;
	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
	(*head)->prev = first;
	first->next = *head;
	*head = first;
	return (first);
}
