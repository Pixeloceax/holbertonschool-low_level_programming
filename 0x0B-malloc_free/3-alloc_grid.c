#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **array ,a ,b;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	while (a < height)
	{
	array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			while (a >= 0)
			{
				a--;
				free(array[a]);
			}
		free(array);
		return (NULL);
		}
	a++;
	}
	for (a = 0; a < height; a++)
	for (b = 0; b < width; b++)

	array[a][b] = 0;
	return (array);
}