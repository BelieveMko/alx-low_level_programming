#include "main.h"
#include <stdlib.h>

/**
 * free_grid:- free up  2D grid previously created
 *
 * @grid:- double pointer 2D grid
 * @height:- height of the grid
 */

void free_grid(int **grid, int height)
{
	int idx = 0;

	while (idx < height)
	{

		free(grid[idx]);
		idx++;

	}

	free(grid);
}
