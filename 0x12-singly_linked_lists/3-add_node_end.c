#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node_end - function
 *@head: head
 *@str: str
 *Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{

	char *dup;
	int size;
	list_t *list, *list_end;

	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (str == NULL)
	{
		free(list);
		return (NULL);
	}
	for (size = 0; str[size]; size++)
		;

	list->str = dup;
	list->len = size;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
	}
	else
	{
		list_end = *head;
		while (list_end->next != NULL)
		{
			list_end = list_end->next;
		}
		list_end->next = list;
	}
	return (*head);
}
