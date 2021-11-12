#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *list_len - function
 *@h: h
 *Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			counter++;
			h = h->next;
		}
	}
	return (counter);
}
