#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid
  * @grid: the 2 dimensional to be freed
  * @height: the height of the 2 dimensional array
  *
  * Return: the freed 2 dimensional array
  */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}

	free(grid);
}
