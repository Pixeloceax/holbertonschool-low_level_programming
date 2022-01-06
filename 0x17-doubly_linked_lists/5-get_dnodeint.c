#include "lists.h"
/**
 *get_dnodeint_at_index - Get the dnodeint at index object
 *@head: V
 *@index: V
 *Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (count = 0; count < index; count++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
