#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: the name to print
 * @f: the function to print with
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *name))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
