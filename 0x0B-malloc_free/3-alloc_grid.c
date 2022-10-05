#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - return pointer to two dimensianal array
 * @width: the width of array
 * @height: the height of array
 *
 * Return: pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
int **finalgrid;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
finalgrid = malloc(sizeof(int *) * height);
if (finalgrid == NULL)
{
free(finalgrid);
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
finalgrid[0] = malloc(sizeof(int) * width);
if (finalgrid[0] == NULL)
{
for (i--; i >= 0; i--)
{
free(finalgrid[i]);
}
free(finalgrid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
finalgrid[i][j] = 0;
}
}
return (finalgrid);
}
}
