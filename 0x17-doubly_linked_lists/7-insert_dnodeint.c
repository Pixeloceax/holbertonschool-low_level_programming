#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *head = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (h == NULL)
	{
		return (NULL);
	}
	
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; head && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (head->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}	
			new_node->next = head->next;
			new_node->prev = head;
			head->next->prev = new_node;
			head->next = new_node;
			return (new_node);
		}
		else
		{
			head = head->next;
		}
	}
	return (NULL);
}
