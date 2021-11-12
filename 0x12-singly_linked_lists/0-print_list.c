#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("%d %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return(counter);
}

 

 