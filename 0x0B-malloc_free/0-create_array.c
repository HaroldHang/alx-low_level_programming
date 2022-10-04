#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array  
 * @size: the size of array to create and return a pointer
 * @c: char to fill array with.
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *s;
int i;
s = malloc(sizeof(char) * size);
if (size <= 0)
{
return NULL;
}
else
{
while (i < size)
{
*(s + i) = c + i;
i++;
}
return  s;
}
}