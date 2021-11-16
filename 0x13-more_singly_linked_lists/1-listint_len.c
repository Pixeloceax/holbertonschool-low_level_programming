#include "lists.h"
/**
 *listint_len - function
 *@h: h
 *Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		h = h->next;
	}
	return (n);
}
