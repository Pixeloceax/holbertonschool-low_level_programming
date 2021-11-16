#include "lists.h"

/**
 *insert_nodeint_at_index - function
 *@head: head
 *@idx: idx
 *@n: n
 *Return: listint_t*
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *end, *tmp = *head;
	unsigned int nodeint = 0;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);

	end->n = n;

	if (idx == 0)
	{
		end->next = tmp;
		*head = end;
		return (end);
	}

	while (nodeint < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		nodeint++;
	}

	end->next = tmp->next;
	tmp->next = end;

	return (end);
}
