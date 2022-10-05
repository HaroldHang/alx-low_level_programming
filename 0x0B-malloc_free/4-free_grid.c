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
int h, w;
int widthSize;
for (h = 0; h < height; h++)
{
widthSize = sizeof(grid[h]) / sizeof(int);
for (w = 0; w < widthSize; w++)
{
free(grid[h][w]);
}
}
}
