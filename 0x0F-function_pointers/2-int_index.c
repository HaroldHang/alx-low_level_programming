#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate an array and apply a function
 * @array: the array to iterate
 * @size: the size of the array
 * @cmp: cmp(function) the function to compare with
 * Return: index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i = 0;
if (array == NULL || cmp == NULL)
{
return;
}
for (; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
