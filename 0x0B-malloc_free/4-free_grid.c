#include "main.h"
#include <stdlib.h>
/**
 * free_grid - main fonction
 * @grid: variable
 * @height: variable
 * Return: nothing
 **/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
