#include "lists.h"
/**
 *dlistint_len - return numbers of element
 *@h: variable
 *Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	node = 0;
	if (h == NULL)
	return (node);
	while (h)
	{
	node++;
	h = h->next;
	}
	return (node);
}
