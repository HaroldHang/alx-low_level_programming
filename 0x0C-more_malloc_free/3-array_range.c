#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - allocate memory to array
 * @min: the smallest number
 * @max: the largest number
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{

int *arr;
int i;
int size ;
if (min > max)
return (NULL);
size = (max - min) + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);

}
