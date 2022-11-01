#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid - function free the grid
*@grid: variable matriz
*@height: variable int
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
