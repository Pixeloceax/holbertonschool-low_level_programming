#include "lists.h"
/**
 *get_dnodeint_at_index - Get the dnodeint at index object
 *@head: V
 *@index: V
 *Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	assert(0);
}
