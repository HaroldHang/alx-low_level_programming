#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to newly allocate memory
 * @str: the character to copie to new allocation
 *
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
int i;
char *s;
i = 0;
s = malloc(sizeof(str));
if (str == NULL || s == NULL)
{
return (NULL);
}
else
{
while (i < sizeof(str))
{
s[i] = str[i];
i++;
}
return  (s);
}
}
