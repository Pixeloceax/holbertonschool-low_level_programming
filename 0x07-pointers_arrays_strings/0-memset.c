#include "main.h"

/**
 * _memset - memeset clone
 * @s : s
 * @b : b
 * @n : n
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
