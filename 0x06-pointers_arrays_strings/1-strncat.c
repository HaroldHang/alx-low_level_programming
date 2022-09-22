#include <stdio.h>
#include <string.h>
/**
 * _strncat - string contatenation
 *@dest: the destination to print
 *@src: the string source
 *@n: n bytes to concatenate
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
