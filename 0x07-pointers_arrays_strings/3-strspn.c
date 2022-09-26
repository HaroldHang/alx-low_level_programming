#include <stdio.h>
#include <string.h>
/**
 * _strspn Fills memory
 *@s: string s
 *@accept: substring
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int r;
r = strspn(s, accept);
return (r);
}
