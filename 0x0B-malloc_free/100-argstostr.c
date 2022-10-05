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
int arg, size, oct, i;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (arg = 0; arg < ac; arg++)
{
for (oct = 0; av[arg][oct]; oct++)
{
size++;
}
}
s = malloc(sizeof(char) * size + 1);
if (s == NULL)
{
return (NULL);
}
i = 0;
for (arg = 0; arg < ac; arg++)
{
for (oct = 0; av[arg][oct]; oct++)
{
s[i++] = av[arg][oct];
}
s[i++] = '\n';
}
s[i] = '\0';
return (s);
}
