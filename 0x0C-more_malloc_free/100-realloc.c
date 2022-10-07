#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - allocate memory to array
 * @ptr: the old memory pointer
 * @old_size: the old size of the memory
 * @new_size: the new size
 *
 * Return: pointer to the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL)
}
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
else
{
if (old_size > new_size)
new_size = old_size;
new_ptr = realloc(ptr, new_size);
}
if (new_ptr == NULL)
return (NULL);
free(ptr);
return (new_ptr);
}



