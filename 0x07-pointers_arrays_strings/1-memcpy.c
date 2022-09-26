#include <stdio.h>
#include <string.h>
/**
 * _memcpy Fills memory
 *@dest: the memory area destination
 *@src: the memory source to copy
 *@n: the n first bytes of memory
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *r;
r = memcpy(dest, src, n);
return (r);
}
