#include "main.h"
#include <stdlib.h>
/**
 *free_grid -  frees a 2 dimensional grid previously created
 *@grid: pointer to a pointer
 *@height: y-axis
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
