#include "lists.h"

/**
 *print_listint - function
 *@h: h
 *Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; n < 2; n++)
	{

		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
