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
if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
s = malloc(sizeof(char) * (sizeof(s1) + (n + 1)));
if (n >= strlen(s2))
{
s = strcat(s1, s2);
}
else
{
s = strcat(s1, s2, n);
}
return (s);
}
