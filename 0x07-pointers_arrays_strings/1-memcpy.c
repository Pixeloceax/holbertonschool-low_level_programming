#include "main.h"

/**
 * _memcpy - memcpy
 * @dest : dest
 * @src : src
 * @n : n
 * Return: Nothing.
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
