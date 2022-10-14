#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers from argments
 * @separator: the separator of printing result
 * @n: the number of arguments
 * @...: Other parameters
 * Return: printed numnbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
if (separator == NULL)
{
return;
}
unsigned int i = 0;
va_list num;
va_start(num, n);
int number;
for (; i < n; i++)
{
number = va_arg(num, int);
if (i == (n - 1))
{
printf("%d\n", number);
}
else
{
printf("%d%s", number, separator);
}
}
va_end(num);
}
