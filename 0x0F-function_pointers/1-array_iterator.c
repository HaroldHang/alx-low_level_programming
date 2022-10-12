#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate an array and apply a function
 * @array: the array to iterate
 * @size: the size of the array
 * @action: the function to print with
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || size == NULL || action == NULL)
{
return;
}
for (unsigned int i = 0; i < size; i++)
{
action(array[i]);
}
}
