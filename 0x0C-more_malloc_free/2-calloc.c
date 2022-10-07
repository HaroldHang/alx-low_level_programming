#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory to array
 * @nmenb: number of element
 * @size: the size of an element
 *
 * Return: pointer to the concatanated string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

void *mem;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(nmemb * size);
if (mem == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
{
*(mem + i) = 0;
}
return (mem);
}
