#include <stdio.h>
#include <string.h>
/**
 * _strchr Fills memory
 *@s: string s
 *@c: character to search
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
char *r;
r = strchr(s, c);
return (r);
}
