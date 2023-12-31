#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional
 * @grid: array to point
 * @height: Columns
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
