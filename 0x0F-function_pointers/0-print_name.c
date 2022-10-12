#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print the name
 * @name: the name to print
 * @f: the funtion to print with
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
