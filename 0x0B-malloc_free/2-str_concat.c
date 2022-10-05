#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
char *s;
s = malloc(sizeof(s1) + sizeof(s2));
if (s == NULL)
{
return (NULL);
}
else if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
else
{
s = strcat(s1, s2);
return  (s);
}
}
