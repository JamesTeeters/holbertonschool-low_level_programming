#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free memory of gird
 * @grid: pre-generated grid
 * @height: input height
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);

}
