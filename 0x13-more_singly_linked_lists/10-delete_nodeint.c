#include "lists.h"

/**
 *delete_nodeint_at_index - function
 *@head: head
 *@index: index
 *Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp, *nodeint = *head;
	unsigned int n = 0;

	if (nodeint == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nodeint);
		return (1);
	}

	while (n < index - 1)
	{
		if (nodeint->next == NULL)
			return (-1);
		nodeint = nodeint->next;
		n++;
	}

	tmp = nodeint->next;
	nodeint->next = tmp->next;

	free(tmp);
	return (1);
}
