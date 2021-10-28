#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked  - main fonction
 *@b : variable
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
