#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print all numbers from argments
 * @separator: the separator of printing result
 * @n: the number of arguments
 * Return: printed numnbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
if (separator == NULL)
{
return;
}

va_list num;
va_start(num, n);
for (unsigned int i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d\n", va_arg(num, int));
}
else
{
printf("%d,", va_arg(num, int));
}
}
va_end(num);

}
