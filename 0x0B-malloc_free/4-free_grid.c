#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - free two dimensianal array
 * @grid: the grid
 * @height: the height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int h;
for (h = 0; h < height; h++)
{
free(grid[h]);
}
}
