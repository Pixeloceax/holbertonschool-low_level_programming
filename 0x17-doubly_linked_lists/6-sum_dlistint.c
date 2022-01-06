#include "lists.h"
/**
 *sum_dlistint - sum of linked list
 *@head: V
 *Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
