#include "main.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - realloc
 * @ptr: variable
 * @old_size: variable
 * @new_size: variable
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	_memcpy(p, ptr, old_size);
	free(ptr);

	return (p);
}

/**
 * _memcpy - memcpy.
 * @dest: variable
 * @src: variable
 * @n: n
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
