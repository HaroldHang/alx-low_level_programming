#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate the n string
 * @s1: the first string
 * @s1: the second string
 * @n: the n character to concatenate
 *
 * Return: pointer to the concatanated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n >= strlen(s2))
n = strlen(s2);

s = malloc(sizeof(char) * (sizeof(s1) + (n + 1)));
if (s == NULL)
{
return (NULL);
}
s = strncat(s1, s2, n);
return (s);
}
