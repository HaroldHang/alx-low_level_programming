#include <stdio.h>
#include <string.h>
/**
 * _strpbrk Occurence string search
 *@s: string s
 *@accept: substring
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
char *r;
r = strpbrk(s, accept);
return (r);
}
