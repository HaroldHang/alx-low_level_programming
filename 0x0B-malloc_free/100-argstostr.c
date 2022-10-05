#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenate arguments
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: pointer to argument string
 */
char *argstostr(int ac, char **av)
{
char *s;
int i;
if (ac == NULL || av == NULL)
{
return (NULL);
}
s = malloc(ac * sizeof(int *));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
*(s + i) = av[i];
}
return (s);
}
