#include "main.h"

/**
 * free_grid- frees the array grid
 * @grid: grid to be freed
 * @height: array height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);


}
