#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node - function
 *@head: head
 *@str: str
 *Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int size;
	list_t *list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(list);
		return (NULL);
	}
	for (size = 0; str[size]; size++)
		;

	list->str = dup;
	list->len = size;
	list->next = *head;
	*head = list;
	return (list);
}
