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
int *s;
s = malloc(sizeof(*s) * width * height);
if (s == NULL)
{
return (NULL);
}
else if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
return  (*s);
}
}
