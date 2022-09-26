#include <stdio.h>
#include <string.h>
/**
 * _memset Fills memory
 *@s: pointed memory
 *@b: the value to fill memory wit
 *@n: the n first bytes of memory
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return s;
}
