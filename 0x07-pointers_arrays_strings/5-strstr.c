#include <stdio.h>
#include <string.h>
/**
 * _strstr Locate a substring
 *@haystack: string haystack to search
 *@needle: substring to seach for
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
char *r;
r = strstr(haystack, needle);
return (r);
}
