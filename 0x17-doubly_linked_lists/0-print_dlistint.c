#include "lists.h"
/**
 *print_dlistint - print numbers of nodes and int of chained list
 * @h: start head of list
 *Return: node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node;

	node = 0;
	if (h == NULL)
	return (node);

	while (h)
	{
	printf("%d\n", h->n);
	node++;
	h = h->next;
	}
	return (node);
}
