#include "lists.h"

/**
 *free_listint - function
 *@head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
    head = NULL;
}
