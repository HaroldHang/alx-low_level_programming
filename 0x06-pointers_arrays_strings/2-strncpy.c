#include <stdio.h>
#include <string.h>
/**
 * _strncpy - string contatenation
 *@dest: the destination to print
 *@src: the string source
 *@n: n bytes to concatenate
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
