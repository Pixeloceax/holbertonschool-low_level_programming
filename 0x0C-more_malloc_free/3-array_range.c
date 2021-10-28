#include "main.h"
#include <stdlib.h>

/**
 * array_range - main fonction
 * @min: int
 * @max: int
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int i;
	int size_A = max - min + 1;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * size_A);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size_A; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
