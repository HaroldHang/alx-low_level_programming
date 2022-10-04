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
unsigned int i;
i = 0;
s = malloc(sizeof(char) * size);
if (size <= 0 || s == NULL)
{
return (NULL);
}
else
{
while (i < size)
{
s[i] = c;
i++;
}
return  (s);
}
}
