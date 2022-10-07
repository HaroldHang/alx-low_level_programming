#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allocate memory
 * @b: the size of memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
